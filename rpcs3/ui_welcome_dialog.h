/********************************************************************************
** Form generated from reading UI file 'welcome_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_DIALOG_H
#define UI_WELCOME_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome_dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *okay;
    QSpacerItem *horizontalSpacer;
    QCheckBox *i_have_read;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *do_not_show;

    void setupUi(QDialog *welcome_dialog)
    {
        if (welcome_dialog->objectName().isEmpty())
            welcome_dialog->setObjectName(QStringLiteral("welcome_dialog"));
        welcome_dialog->resize(611, 272);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(welcome_dialog->sizePolicy().hasHeightForWidth());
        welcome_dialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rpcs3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        welcome_dialog->setWindowIcon(icon);
        welcome_dialog->setAutoFillBackground(false);
        welcome_dialog->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(welcome_dialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(welcome_dialog);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 50));
        QFont font;
        font.setPointSize(8);
        label_2->setFont(font);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Icons/insignia.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setMargin(0);

        verticalLayout_4->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(widget_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setKerning(true);
        label_3->setFont(font2);
        label_3->setTextFormat(Qt::RichText);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(false);
        label_3->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(widget_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        label_5 = new QLabel(welcome_dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font3;
        font3.setKerning(true);
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral(""));
        label_5->setTextFormat(Qt::RichText);
        label_5->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_5->setWordWrap(true);
        label_5->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(welcome_dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_6->setFont(font4);
        label_6->setStyleSheet(QStringLiteral(""));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(label_6, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        okay = new QPushButton(welcome_dialog);
        okay->setObjectName(QStringLiteral("okay"));
        okay->setAutoDefault(true);

        horizontalLayout->addWidget(okay, 0, Qt::AlignLeft);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        i_have_read = new QCheckBox(welcome_dialog);
        i_have_read->setObjectName(QStringLiteral("i_have_read"));
        i_have_read->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(i_have_read, 0, Qt::AlignLeft);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        do_not_show = new QCheckBox(welcome_dialog);
        do_not_show->setObjectName(QStringLiteral("do_not_show"));
        do_not_show->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(do_not_show, 0, Qt::AlignLeft);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(welcome_dialog);

        QMetaObject::connectSlotsByName(welcome_dialog);
    } // setupUi

    void retranslateUi(QDialog *welcome_dialog)
    {
        welcome_dialog->setWindowTitle(QApplication::translate("welcome_dialog", "Welcome to RPCS3", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QApplication::translate("welcome_dialog", "RPCS3 PlayStation 3 Emulator", Q_NULLPTR));
        label_3->setText(QApplication::translate("welcome_dialog", "<html><head/><body><p>RPCS3 is an open-source Sony PlayStation 3 emulator and debugger.<br/>It is written in C++ for Windows and Linux and funded with <a href=\"https://www.patreon.com/Nekotekina\"><span style=\" text-decoration: underline; color:#0000ff;\">Patreon</span></a>.<br/>Our developers and contributors are always working hard to ensure this project can be the best that it can be.<br/>There are still plenty of implementations to be made and optimizations to be done.</p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("welcome_dialog", "<html><head/><body><p>To get started, you must first install the <span style=\" font-weight:600;\">PlayStation 3 firmware</span>.<br/>Please refer to the <a href=\"https://rpcs3.net/quickstart\"><span style=\" text-decoration: underline; color:#0000ff;\">Quickstart</span></a> guide found on the official website for further information.<br/>If you have any further questions, please refer to the <a href=\"https://rpcs3.net/faq\"><span style=\" text-decoration: underline; color:#0000ff;\">FAQ</span></a>.<br/>Otherwise, further discussion and support can be found on the <a href=\"http://www.emunewz.net/forum/forumdisplay.php?fid=172\"><span style=\" text-decoration: underline; color:#0000ff;\">Forums</span></a> or on our <a href=\"https://discord.me/RPCS3\"><span style=\" text-decoration: underline; color:#0000ff;\">Discord</span></a> server.</p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("welcome_dialog", "<html><head/><body><p><br/><span style=\" font-weight:600; color:#ff0000;\">RPCS3 does not condone piracy. You must dump your own games.</span><br/></p></body></html>", Q_NULLPTR));
        okay->setText(QApplication::translate("welcome_dialog", "Continue", Q_NULLPTR));
        i_have_read->setText(QApplication::translate("welcome_dialog", "I have read the Quickstart guide", Q_NULLPTR));
        do_not_show->setText(QApplication::translate("welcome_dialog", "Do not show again", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class welcome_dialog: public Ui_welcome_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_DIALOG_H
