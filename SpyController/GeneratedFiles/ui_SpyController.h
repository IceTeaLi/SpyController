/********************************************************************************
** Form generated from reading UI file 'SpyController.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPYCONTROLLER_H
#define UI_SPYCONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpyControllerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SpyControllerClass)
    {
        if (SpyControllerClass->objectName().isEmpty())
            SpyControllerClass->setObjectName(QString::fromUtf8("SpyControllerClass"));
        SpyControllerClass->resize(600, 400);
        menuBar = new QMenuBar(SpyControllerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        SpyControllerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SpyControllerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SpyControllerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SpyControllerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        SpyControllerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SpyControllerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SpyControllerClass->setStatusBar(statusBar);

        retranslateUi(SpyControllerClass);

        QMetaObject::connectSlotsByName(SpyControllerClass);
    } // setupUi

    void retranslateUi(QMainWindow *SpyControllerClass)
    {
        SpyControllerClass->setWindowTitle(QApplication::translate("SpyControllerClass", "SpyController", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpyControllerClass: public Ui_SpyControllerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPYCONTROLLER_H
