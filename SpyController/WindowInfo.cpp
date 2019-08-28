#include "WindowInfo.h"

using namespace window;



BaseInfo::BaseInfo(const HWND& wnd):wnd(wnd)
{
	if (wnd == NULL)
		throw "ERROR <window hwnd input> : NULL HWND";
	GetInfo(wnd);
}



void window::BaseInfo::GetInfo(HWND wnd)
{
	this->wnd = wnd;
	GetWindowRect(wnd, &rc);

	PTCHAR pStrTitle;
	pStrTitle = (PTCHAR)VirtualAlloc((LPVOID)NULL, GetWindowTextLength(wnd) + 1, MEM_COMMIT, PAGE_READWRITE);
	GetWindowText(wnd, pStrTitle, GetWindowTextLength(wnd) + 1);
	title = QString::fromWCharArray(pStrTitle, GetWindowTextLength(wnd) + 1);
	style = GetWindowLong(wnd, GWL_STYLE);

	VirtualFree(pStrTitle, 0, MEM_RELEASE);
}



void WindowFinder::run()
{
	if (is_scan)
	{
		throw "Find Window module is running";
	}
	else {
		is_scan = true;
	}
	while (is_scan)
	{
		GetCursorPos(&pos);
		wnd = WindowFromPoint(pos);
		info.GetInfo(wnd);
		rc = info.Rect();

		emit EmitRect(rc);
		Sleep(scan_delay);
	}
	
}


