#pragma once

#include <Windows.h>
#include <QString>
#include <QThread>
#include <QRect>

namespace window {

	class Window
	{
	public:

		virtual ~Window() {}

		virtual const QString& Tile() = 0;

		virtual const RECT& Rect() = 0;

		virtual const LONG Style() = 0;

	};

	class BaseInfo :public Window
	{
	public:
		BaseInfo() = default;
		BaseInfo(const HWND&);

		virtual const QString& Tile() override
		{
			return title;
		}

		virtual const RECT& Rect() override
		{
			return rc;
		}

		virtual const LONG Style() override
		{
			return style;
		}

		void GetInfo(HWND);

	private:

		HWND wnd;
		QString title = {};
		RECT rc;
		LONG style=NULL;
	};

	class WindowFinder:public QThread
	{
		Q_OBJECT
	public:
		static WindowFinder& GetInstance()
		{
			static WindowFinder finder;
			return finder;
		}

		virtual void run()override;

		inline const BaseInfo Close()
		{			
			is_scan = false;	
			return info;
		}


		inline void SetScanDelay(const DWORD& time)
		{
			scan_delay = time;
		}

	signals:

		void EmitRect(RECT);
		void EmitQRect(QRect);

	private:
		WindowFinder()=default;

		~WindowFinder() = default;

		DWORD scan_delay = 50;

		bool is_scan = false;


		POINT pos = {};

		HWND wnd;

		RECT rc;

		BaseInfo info;

	};
}