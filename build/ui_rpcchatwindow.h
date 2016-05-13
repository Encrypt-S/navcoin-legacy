/********************************************************************************
** Form generated from reading UI file 'rpcchatwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPCCHATWINDOW_H
#define UI_RPCCHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RpcChatWindowClass
{
public:
    QAction *actionQuit;
    QAction *actionCloseTab;
    QWidget *widget_2;
    QWidget *splitter;
    QTabWidget *tab;
    QWidget *widget_4;
    QWidget *tab_5;
    QLineEdit *lineEdit;
    QListView *userView;
    QPushButton *disconnect;
    QWidget *hide3;
    QWidget *layoutWidget;
    QHBoxLayout *hide1;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *editPseudo;
    QLabel *label_5;
    QPushButton *buttonConnect;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_7;
    QWidget *layoutWidget_2;
    QHBoxLayout *hide1_2;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_5;
    QWidget *layoutWidget_3;
    QHBoxLayout *hide1_3;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_8;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_2;
    QLabel *label_15;

    void setupUi(QWidget *RpcChatWindowClass)
    {
        if (RpcChatWindowClass->objectName().isEmpty())
            RpcChatWindowClass->setObjectName(QStringLiteral("RpcChatWindowClass"));
        RpcChatWindowClass->resize(747, 514);
        actionQuit = new QAction(RpcChatWindowClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionCloseTab = new QAction(RpcChatWindowClass);
        actionCloseTab->setObjectName(QStringLiteral("actionCloseTab"));
        widget_2 = new QWidget(RpcChatWindowClass);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 741, 511));
        splitter = new QWidget(widget_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setEnabled(true);
        splitter->setGeometry(QRect(10, 10, 721, 501));
        splitter->setStyleSheet(QStringLiteral(""));
        tab = new QTabWidget(splitter);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setGeometry(QRect(10, 0, 541, 451));
        tab->setStyleSheet(QStringLiteral(""));
        tab->setTabShape(QTabWidget::Rounded);
        tab->setTabsClosable(false);
        widget_4 = new QWidget();
        widget_4->setObjectName(QStringLiteral("widget_4"));
        tab->addTab(widget_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tab->addTab(tab_5, QString());
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 460, 701, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(16777215, 30));
        userView = new QListView(splitter);
        userView->setObjectName(QStringLiteral("userView"));
        userView->setGeometry(QRect(560, 20, 161, 391));
        userView->setMinimumSize(QSize(0, 300));
        userView->setStyleSheet(QStringLiteral("border-radius:10px;"));
        disconnect = new QPushButton(splitter);
        disconnect->setObjectName(QStringLiteral("disconnect"));
        disconnect->setGeometry(QRect(642, 420, 71, 28));
        hide3 = new QWidget(widget_2);
        hide3->setObjectName(QStringLiteral("hide3"));
        hide3->setGeometry(QRect(10, 10, 731, 501));
        layoutWidget = new QWidget(hide3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 250, 29));
        hide1 = new QHBoxLayout(layoutWidget);
        hide1->setSpacing(7);
        hide1->setContentsMargins(11, 11, 11, 11);
        hide1->setObjectName(QStringLiteral("hide1"));
        hide1->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font;
        font.setFamily(QStringLiteral("Open Sans,sans-serif"));
        label_9->setFont(font);

        hide1->addWidget(label_9);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hide1->addItem(horizontalSpacer_4);

        label = new QLabel(hide3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 190, 111, 101));
        label->setMargin(5);
        label->setOpenExternalLinks(true);
        label_3 = new QLabel(hide3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 190, 101, 101));
        label_3->setOpenExternalLinks(true);
        editPseudo = new QLineEdit(hide3);
        editPseudo->setObjectName(QStringLiteral("editPseudo"));
        editPseudo->setGeometry(QRect(120, 80, 151, 22));
        label_5 = new QLabel(hide3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 80, 71, 21));
        buttonConnect = new QPushButton(hide3);
        buttonConnect->setObjectName(QStringLiteral("buttonConnect"));
        buttonConnect->setGeometry(QRect(120, 110, 151, 41));
        buttonConnect->setStyleSheet(QStringLiteral("border-radius:40px;border:1px solid grey"));
        label_10 = new QLabel(hide3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(140, 60, 121, 16));
        label_4 = new QLabel(hide3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 190, 101, 101));
        label_4->setOpenExternalLinks(true);
        label_7 = new QLabel(hide3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(350, 190, 101, 101));
        label_7->setOpenExternalLinks(true);
        layoutWidget_2 = new QWidget(hide3);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 160, 250, 29));
        hide1_2 = new QHBoxLayout(layoutWidget_2);
        hide1_2->setSpacing(7);
        hide1_2->setContentsMargins(11, 11, 11, 11);
        hide1_2->setObjectName(QStringLiteral("hide1_2"));
        hide1_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        hide1_2->addWidget(label_11);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hide1_2->addItem(horizontalSpacer_5);

        layoutWidget_3 = new QWidget(hide3);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 300, 250, 29));
        hide1_3 = new QHBoxLayout(layoutWidget_3);
        hide1_3->setSpacing(7);
        hide1_3->setContentsMargins(11, 11, 11, 11);
        hide1_3->setObjectName(QStringLiteral("hide1_3"));
        hide1_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        hide1_3->addWidget(label_12);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hide1_3->addItem(horizontalSpacer_6);

        label_8 = new QLabel(hide3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(-30, 340, 161, 101));
        label_8->setOpenExternalLinks(true);
        label_13 = new QLabel(hide3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(60, 340, 171, 101));
        label_13->setOpenExternalLinks(true);
        label_14 = new QLabel(hide3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(190, 340, 161, 101));
        label_14->setOpenExternalLinks(true);
        label_2 = new QLabel(hide3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-10, 210, 111, 101));
        label_2->setMargin(5);
        label_2->setOpenExternalLinks(true);
        label_15 = new QLabel(hide3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(330, 340, 161, 101));
        label_15->setOpenExternalLinks(true);

        retranslateUi(RpcChatWindowClass);

        tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RpcChatWindowClass);
    } // setupUi

    void retranslateUi(QWidget *RpcChatWindowClass)
    {
        actionQuit->setText(QApplication::translate("RpcChatWindowClass", "Quitter", 0));
        actionQuit->setShortcut(QApplication::translate("RpcChatWindowClass", "Ctrl+Q", 0));
        actionCloseTab->setText(QApplication::translate("RpcChatWindowClass", "Fermer l'onglet", 0));
        tab->setTabText(tab->indexOf(widget_4), QApplication::translate("RpcChatWindowClass", "Tab 1", 0));
        tab->setTabText(tab->indexOf(tab_5), QApplication::translate("RpcChatWindowClass", "Tab 2", 0));
        disconnect->setText(QApplication::translate("RpcChatWindowClass", "Disconnect", 0));
        label_9->setText(QApplication::translate("RpcChatWindowClass", "NavCoin IRC Chat", 0));
        label->setText(QApplication::translate("RpcChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://twitter.com/NavCoin style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/twitter\"/></span></a></p></body></html>", 0));
        label_3->setText(QApplication::translate("RpcChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://www.facebook.com/pages/Navajo-Coin/275085062670816 style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/face\"/></span></a></p></body></html>", 0));
        editPseudo->setText(QString());
        label_5->setText(QApplication::translate("RpcChatWindowClass", "Nickname", 0));
        buttonConnect->setText(QApplication::translate("RpcChatWindowClass", "Click to connect", 0));
        label_10->setText(QApplication::translate("RpcChatWindowClass", "<html><head/><body><p><span style=\" font-weight:600;\">Connect to IRC:</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("RpcChatWindowClass", "<html><head/><body><p align=\"center\"><a href=http://www.reddit.com/r/NavCoin style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/reddit\"/></span></a></p></body></html>", 0));
        label_7->setText(QApplication::translate("RpcChatWindowClass", "<html><head/><body><p align=\"center\"><a href=http://navajocointalk.org style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/forums\"/></span></a></p></body></html>", 0));
        label_11->setText(QApplication::translate("RpcChatWindowClass", "Social", 0));
        label_12->setText(QApplication::translate("RpcChatWindowClass", "Exchanges", 0));
        label_8->setText(QApplication::translate("RpcChatWindowClass", "<html><head/><body><p align=\"center\"><a href=\"https://bittrex.com/Market/?MarketName=BTC-NAV; style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/bittrex\"/></span></a></p></body></html>", 0));
        label_13->setText(QApplication::translate("RpcChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://poloniex.com/exchange/btc_nav style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/poloniex\"/></span></a></p></body></html>", 0));
        label_14->setText(QApplication::translate("RpcChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://www.cryptsy.com/markets/view/252 style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/cryptsy\"/></span></a></p></body></html>", 0));
        label_2->setText(QApplication::translate("RpcChatWindowClass", "<html><head/><body><p align=\"center\"><a href=http://www.navajocoin.org style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/website\"/></span></a></p></body></html>", 0));
        label_15->setText(QApplication::translate("RpcChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://alcurex.org/index.php/crypto/market?pair=nav_btc style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/alcurex\"/></span></a></p></body></html>", 0));
        Q_UNUSED(RpcChatWindowClass);
    } // retranslateUi

};

namespace Ui {
    class RpcChatWindowClass: public Ui_RpcChatWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPCCHATWINDOW_H
