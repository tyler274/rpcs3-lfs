/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about_dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *version;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *gitHub;
    QPushButton *website;
    QPushButton *forum;
    QPushButton *patreon;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *close;

    void setupUi(QDialog *about_dialog)
    {
        if (about_dialog->objectName().isEmpty())
            about_dialog->setObjectName(QStringLiteral("about_dialog"));
        about_dialog->resize(609, 474);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(about_dialog->sizePolicy().hasHeightForWidth());
        about_dialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rpcs3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        about_dialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(about_dialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(about_dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(50, 50));
        QFont font;
        font.setPointSize(8);
        label_2->setFont(font);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Icons/insignia.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_2->setMargin(0);

        verticalLayout_2->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(widget_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setKerning(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setTextFormat(Qt::RichText);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(false);
        label_3->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_3);

        version = new QLabel(widget);
        version->setObjectName(QStringLiteral("version"));
        version->setFont(font2);
        version->setStyleSheet(QStringLiteral(""));
        version->setTextFormat(Qt::RichText);
        version->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        version->setWordWrap(true);

        verticalLayout->addWidget(version);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(widget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(50);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(24, -1, 0, 10);
        label_4 = new QLabel(about_dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(label_4);

        label_8 = new QLabel(about_dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(label_8);

        label_7 = new QLabel(about_dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        gitHub = new QPushButton(about_dialog);
        gitHub->setObjectName(QStringLiteral("gitHub"));

        horizontalLayout->addWidget(gitHub);

        website = new QPushButton(about_dialog);
        website->setObjectName(QStringLiteral("website"));

        horizontalLayout->addWidget(website);

        forum = new QPushButton(about_dialog);
        forum->setObjectName(QStringLiteral("forum"));

        horizontalLayout->addWidget(forum);

        patreon = new QPushButton(about_dialog);
        patreon->setObjectName(QStringLiteral("patreon"));

        horizontalLayout->addWidget(patreon);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        close = new QPushButton(about_dialog);
        close->setObjectName(QStringLiteral("close"));

        horizontalLayout->addWidget(close);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(about_dialog);

        QMetaObject::connectSlotsByName(about_dialog);
    } // setupUi

    void retranslateUi(QDialog *about_dialog)
    {
        about_dialog->setWindowTitle(QApplication::translate("about_dialog", "About RPCS3", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QApplication::translate("about_dialog", "RPCS3 PlayStation 3 Emulator", Q_NULLPTR));
        label_3->setText(QApplication::translate("about_dialog", "<html><head/><body><p>RPCS3 is an open-source Sony PlayStation 3 emulator and debugger.<br/>It is written in C++ for Windows and Linux funded with <a href=\"https://www.patreon.com/Nekotekina\"><span style=\" text-decoration: underline; color:#0000ff;\">Patreon</span></a>.<br/>Our developers and contributors are always working hard to ensure this project can be the best that it can be.<br/>There are still plenty of implementations to be made and optimizations to be done.</p></body></html>", Q_NULLPTR));
        version->setText(QString());
        label_4->setText(QApplication::translate("about_dialog", "<p><b>Developers:</b><br><br>\302\254DH<br>\302\254AlexAltea<br>\302\254Hykem<br>Oil<br>Nekotekina<br>Bigpet<br>\302\254gopalsr83<br>\302\254tambry<br>vlj<br>kd-11<br>jarveson<br>raven02<br>AniLeo<br>cornytrace<br>ssshadow<br>Numan</p>", Q_NULLPTR));
        label_8->setText(QApplication::translate("about_dialog", "<p><b>Contributors:</b><br><br>BlackDaemon<br>elisha464<br>Aishou<br>krofna<br>xsacha<br>danilaml<br>unknownbrackets<br>Zangetsu38<br>lioncash<br>achurch<br>darkf<br>Syphurith<br>Blaypeg<br>Survanium90<br>georgemoralis<br>ikki84<br>hcorion<br>Megamouse<br>flash-fire<br>DAGINATSUKO</p>", Q_NULLPTR));
        label_7->setText(QApplication::translate("about_dialog", "<p><b>Supporters:</b><br><br>Howard Garrison<br>EXPotemkin<br>Marko V.<br>danhp<br>Jake (5315825)<br>Ian Reid<br>Tad Sherlock<br>Tyler Friesen<br>Folzar<br>Payton Williams<br>RedPill Australia<br>yanghong<br>Mohammed El-Serougi<br>\320\224\320\270\320\274\320\260 ~Ximer13~ \320\232\321\203\320\273\320\270\320\275<br>James Reed<br>BaroqueSonata<br>Bonzay0<br>Henrijs Kons<br>Davide Balbi<br>Lena St\303\266ffler</p>", Q_NULLPTR));
        gitHub->setText(QApplication::translate("about_dialog", "GitHub", Q_NULLPTR));
        website->setText(QApplication::translate("about_dialog", "Website", Q_NULLPTR));
        forum->setText(QApplication::translate("about_dialog", "Forum", Q_NULLPTR));
        patreon->setText(QApplication::translate("about_dialog", "Patreon", Q_NULLPTR));
        close->setText(QApplication::translate("about_dialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class about_dialog: public Ui_about_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
