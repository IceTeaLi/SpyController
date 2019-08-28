#pragma once

#include <QtWidgets/QMainWindow>
#include <QMetaType>
#include "ui_SpyController.h"

#include "WindowInfo.h"
#include "Paint.h"

class SpyController : public QMainWindow
{
	Q_OBJECT

public:
	SpyController(QWidget *parent = Q_NULLPTR);

private:
	Ui::SpyControllerClass ui;
};
