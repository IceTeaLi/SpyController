#include "SpyController.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SpyController w;
	w.show();
	return a.exec();
}
