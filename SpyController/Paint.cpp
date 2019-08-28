#include "Paint.h"

using namespace paint;


void Border::paintEvent(QPaintEvent* event)
{
		QPainter painter(this);
		painter.fillRect(QRect(rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top), QColor(128, 128, 128, 60));
		painter.setPen(QPen(Qt::red, 4));

		painter.drawRect(rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top);

}

void Border::StartPaint()
{
	setAttribute(Qt::WA_TransparentForMouseEvents, true);	//��괩͸
	setWindowFlag(Qt::WindowStaysOnTopHint);							//ǰ�û���
	setWindowFlag(Qt::FramelessWindowHint);							//ȥ�߿�
	setAttribute(Qt::WA_TranslucentBackground, true);				//����͸��
	//setAttribute(Qt::WA_DeleteOnClose);									//close()ʱ����

	this->show();
	this->showFullScreen();
}

void Border::PaintRect(RECT recive_rc)
{
	rc = recive_rc;
	this->repaint();
}

void Border::PaintQRect(QRect recive_rc)
{
	//rc = recive_rc;
	this->repaint();
}
