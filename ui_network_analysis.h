/********************************************************************************
** Form generated from reading UI file 'network_analysis.ui'
**
** Created: Wed Jan 2 14:35:58 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORK_ANALYSIS_H
#define UI_NETWORK_ANALYSIS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Network_analysis
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_draw_network;
    QComboBox *comboBox_mirna;
    QComboBox *comboBox_tfs;
    QLineEdit *lineEdit_gene_name;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QComboBox *comboBox_platform;
    QLabel *label_4;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Network_analysis)
    {
        if (Network_analysis->objectName().isEmpty())
            Network_analysis->setObjectName(QString::fromUtf8("Network_analysis"));
        Network_analysis->resize(579, 393);
        centralWidget = new QWidget(Network_analysis);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_draw_network = new QPushButton(centralWidget);
        pushButton_draw_network->setObjectName(QString::fromUtf8("pushButton_draw_network"));
        pushButton_draw_network->setGeometry(QRect(330, 310, 113, 27));
        comboBox_mirna = new QComboBox(centralWidget);
        comboBox_mirna->setObjectName(QString::fromUtf8("comboBox_mirna"));
        comboBox_mirna->setGeometry(QRect(220, 230, 116, 27));
        comboBox_tfs = new QComboBox(centralWidget);
        comboBox_tfs->setObjectName(QString::fromUtf8("comboBox_tfs"));
        comboBox_tfs->setGeometry(QRect(400, 230, 85, 27));
        lineEdit_gene_name = new QLineEdit(centralWidget);
        lineEdit_gene_name->setObjectName(QString::fromUtf8("lineEdit_gene_name"));
        lineEdit_gene_name->setGeometry(QRect(20, 230, 146, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 200, 150, 17));
        label->setStyleSheet(QString::fromUtf8("color: rgb(170, 85, 255);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 200, 92, 17));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(170, 85, 255);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 200, 179, 17));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(170, 85, 255);"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 581, 181));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 211, 255);border-image: url(\"d1.png\");"));
        comboBox_platform = new QComboBox(centralWidget);
        comboBox_platform->setObjectName(QString::fromUtf8("comboBox_platform"));
        comboBox_platform->setGeometry(QRect(150, 310, 108, 27));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 280, 114, 17));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(170, 85, 255);"));
        Network_analysis->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Network_analysis);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 579, 25));
        Network_analysis->setMenuBar(menuBar);
        statusBar = new QStatusBar(Network_analysis);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Network_analysis->setStatusBar(statusBar);

        retranslateUi(Network_analysis);

        QMetaObject::connectSlotsByName(Network_analysis);
    } // setupUi

    void retranslateUi(QMainWindow *Network_analysis)
    {
        Network_analysis->setWindowTitle(QApplication::translate("Network_analysis", "Network_analysis", 0, QApplication::UnicodeUTF8));
        pushButton_draw_network->setText(QApplication::translate("Network_analysis", "Draw network", 0, QApplication::UnicodeUTF8));
        comboBox_mirna->clear();
        comboBox_mirna->insertItems(0, QStringList()
         << QApplication::translate("Network_analysis", "ath-miR169e", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Network_analysis", "ath-miR413", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Network_analysis", "ath-miR773", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Network_analysis", "ath-miR781", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Network_analysis", "ath-miR837", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("Network_analysis", "Enter the TAIR locus ID", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Network_analysis", "Select miRNA", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Network_analysis", "Select Transcription factor", 0, QApplication::UnicodeUTF8));
        comboBox_platform->clear();
        comboBox_platform->insertItems(0, QStringList()
         << QApplication::translate("Network_analysis", "NGS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Network_analysis", "Microarray", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("Network_analysis", "Choose Platform", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Network_analysis: public Ui_Network_analysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORK_ANALYSIS_H
