#pragma once
#include <QPainter>
#include <QWidget>
#include <QThread>
#include <QRect>

#include <Windows.h>

namespace paint {

	//public:
	//StartPaint()
	//send rect to PaintRect() slots
	//StopPaint()

	class Border:public QWidget
	{
		Q_OBJECT
	public:
		Border(QWidget* parent = Q_NULLPTR)
			:QWidget(parent)
		{

		}
		~Border() {}


		void StartPaint();

		inline void StopPaint()
		{
			this->close();
		}


	public slots:

		void PaintRect(RECT);
		void PaintQRect(QRect);

	protected:

		virtual void paintEvent(QPaintEvent* event)override;

	private:

		RECT rc;
	};
}