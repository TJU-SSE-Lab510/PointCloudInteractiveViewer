/********************************************************************************
** Form generated from reading UI file 'pclvisualizer.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PCLVISUALIZER_H
#define UI_PCLVISUALIZER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PCLVisualizer
{
public:
    QAction *actionOpen;
    QWidget *centralwidget;
    QVTKWidget *qvtkWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *PCLVisualizer)
    {
        if (PCLVisualizer->objectName().isEmpty())
            PCLVisualizer->setObjectName(QStringLiteral("PCLVisualizer"));
        PCLVisualizer->resize(966, 499);
        PCLVisualizer->setMinimumSize(QSize(0, 0));
        PCLVisualizer->setMaximumSize(QSize(5000, 5000));
        actionOpen = new QAction(PCLVisualizer);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        centralwidget = new QWidget(PCLVisualizer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        qvtkWidget = new QVTKWidget(centralwidget);
        qvtkWidget->setObjectName(QStringLiteral("qvtkWidget"));
        qvtkWidget->setGeometry(QRect(9, 10, 931, 480));
        PCLVisualizer->setCentralWidget(centralwidget);
        toolBar = new QToolBar(PCLVisualizer);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        PCLVisualizer->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionOpen);

        retranslateUi(PCLVisualizer);

        QMetaObject::connectSlotsByName(PCLVisualizer);
    } // setupUi

    void retranslateUi(QMainWindow *PCLVisualizer)
    {
        PCLVisualizer->setWindowTitle(QApplication::translate("PCLVisualizer", "PCLViewer", nullptr));
        actionOpen->setText(QApplication::translate("PCLVisualizer", "File", nullptr));
        toolBar->setWindowTitle(QApplication::translate("PCLVisualizer", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PCLVisualizer: public Ui_PCLVisualizer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCLVISUALIZER_H
