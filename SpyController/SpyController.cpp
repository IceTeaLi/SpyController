#include "SpyController.h"

using namespace paint;
using namespace window;

SpyController::SpyController(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	qRegisterMetaType<RECT>("RECT");
	Border* painter = new Border;
	WindowFinder *finder = &WindowFinder::GetInstance();
	connect(finder, &WindowFinder::EmitRect, painter, &Border::PaintRect);
	painter->StartPaint();
	finder->start();

	Sleep(10000);

	BaseInfo info = finder->Close();
	painter->StopPaint();
	
}
