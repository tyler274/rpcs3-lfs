/********************************************************************************
** Form generated from reading UI file 'settings_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_DIALOG_H
#define UI_SETTINGS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings_dialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *coreTab;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *ppu;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *ppu_precise;
    QRadioButton *ppu_fast;
    QRadioButton *ppu_llvm;
    QGroupBox *spu;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *spu_precise;
    QRadioButton *spu_fast;
    QRadioButton *spu_asmjit;
    QRadioButton *spu_llvm;
    QGroupBox *checkboxes;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *hookStFunc;
    QCheckBox *bindSPUThreads;
    QCheckBox *lowerSPUThrPrio;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *lib_settings;
    QVBoxLayout *verticalLayout;
    QRadioButton *lib_auto;
    QRadioButton *lib_manu;
    QRadioButton *lib_both;
    QRadioButton *lib_lv2;
    QGroupBox *groupBox_28;
    QVBoxLayout *verticalLayout_12;
    QListWidget *lleList;
    QGroupBox *groupBox_40;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *searchBox;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_41;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QWidget *gpuTab;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_26;
    QVBoxLayout *verticalLayout_19;
    QComboBox *renderBox;
    QGroupBox *groupBox_29;
    QVBoxLayout *verticalLayout_22;
    QComboBox *resBox;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_42;
    QVBoxLayout *verticalLayout_18;
    QComboBox *graphicsAdapterBox;
    QGroupBox *groupBox_43;
    QVBoxLayout *verticalLayout_21;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_44;
    QVBoxLayout *verticalLayout_14;
    QComboBox *aspectBox;
    QGroupBox *groupBox_45;
    QVBoxLayout *verticalLayout_15;
    QComboBox *frameLimitBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_46;
    QVBoxLayout *verticalLayout_16;
    QCheckBox *dumpColor;
    QCheckBox *dumpDepth;
    QCheckBox *readColor;
    QCheckBox *readDepth;
    QCheckBox *autoInvalidateCache;
    QCheckBox *gpuTextureScaling;
    QCheckBox *vsync;
    QGroupBox *groupBox_48;
    QVBoxLayout *verticalLayout_17;
    QCheckBox *glLegacyBuffers;
    QCheckBox *debugOutput;
    QCheckBox *debugOverlay;
    QCheckBox *scrictModeRendering;
    QCheckBox *logProg;
    QCheckBox *forceHighpZ;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_47;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QWidget *audioTab;
    QVBoxLayout *verticalLayout_26;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_25;
    QGroupBox *groupBox_30;
    QVBoxLayout *verticalLayout_24;
    QComboBox *audioOutBox;
    QGroupBox *groupBox_49;
    QVBoxLayout *verticalLayout_23;
    QCheckBox *audioDump;
    QCheckBox *convert;
    QCheckBox *downmix;
    QWidget *widget_2;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox_50;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_4;
    QWidget *inputTab;
    QVBoxLayout *verticalLayout_32;
    QHBoxLayout *horizontalLayout_10;
    QGroupBox *groupBox_52;
    QVBoxLayout *verticalLayout_29;
    QComboBox *padHandlerBox;
    QGroupBox *groupBox_31;
    QVBoxLayout *verticalLayout_30;
    QComboBox *cameraTypeBox;
    QHBoxLayout *horizontalLayout_11;
    QGroupBox *groupBox_51;
    QVBoxLayout *verticalLayout_27;
    QComboBox *keyboardHandlerBox;
    QGroupBox *groupBox_54;
    QVBoxLayout *verticalLayout_31;
    QCheckBox *useFakeCamera;
    QHBoxLayout *horizontalLayout_12;
    QGroupBox *groupBox_53;
    QVBoxLayout *verticalLayout_28;
    QComboBox *mouseHandlerBox;
    QWidget *widget_3;
    QSpacerItem *verticalSpacer_7;
    QGroupBox *groupBox_59;
    QVBoxLayout *verticalLayout_33;
    QLabel *label_5;
    QWidget *systemTab;
    QVBoxLayout *verticalLayout_37;
    QHBoxLayout *horizontalLayout_14;
    QGroupBox *groupBox_34;
    QVBoxLayout *verticalLayout_34;
    QComboBox *sysLangBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_35;
    QCheckBox *enableHostRoot;
    QHBoxLayout *horizontalLayout_15;
    QGroupBox *groupBox_33;
    QVBoxLayout *verticalLayout_36;
    QComboBox *comboBox_12;
    QWidget *widget_4;
    QSpacerItem *verticalSpacer_8;
    QGroupBox *groupBox_61;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QWidget *networkTab;
    QVBoxLayout *verticalLayout_40;
    QHBoxLayout *horizontalLayout_16;
    QGroupBox *groupBox_32;
    QVBoxLayout *verticalLayout_38;
    QComboBox *netStatusBox;
    QWidget *widget_5;
    QSpacerItem *verticalSpacer_9;
    QGroupBox *groupBox_60;
    QVBoxLayout *verticalLayout_39;
    QLabel *label_6;
    QWidget *emulatorTab;
    QVBoxLayout *verticalLayout_46;
    QHBoxLayout *horizontalLayout_17;
    QGroupBox *groupBox_55;
    QVBoxLayout *verticalLayout_41;
    QCheckBox *exitOnStop;
    QCheckBox *alwaysStart;
    QCheckBox *startGameFullscreen;
    QCheckBox *showFPSInTitle;
    QGroupBox *gb_settings;
    QVBoxLayout *verticalLayout_42;
    QPushButton *pb_reset_default;
    QPushButton *pb_backup_config;
    QPushButton *pb_open_folder;
    QCheckBox *cb_show_welcome;
    QHBoxLayout *horizontalLayout_18;
    QGroupBox *gb_configs;
    QVBoxLayout *verticalLayout_44;
    QComboBox *combo_configs;
    QPushButton *pb_apply_config;
    QGroupBox *gb_stylesheets;
    QVBoxLayout *verticalLayout_43;
    QComboBox *combo_stylesheets;
    QPushButton *pb_apply_stylesheet;
    QSpacerItem *verticalSpacer_10;
    QGroupBox *groupBox_62;
    QVBoxLayout *verticalLayout_45;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QButtonGroup *spuBG;
    QButtonGroup *ppuBG;

    void setupUi(QDialog *settings_dialog)
    {
        if (settings_dialog->objectName().isEmpty())
            settings_dialog->setObjectName(QStringLiteral("settings_dialog"));
        settings_dialog->resize(550, 604);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settings_dialog->sizePolicy().hasHeightForWidth());
        settings_dialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rpcs3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        settings_dialog->setWindowIcon(icon);
        verticalLayout_6 = new QVBoxLayout(settings_dialog);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tabWidget = new QTabWidget(settings_dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        coreTab = new QWidget();
        coreTab->setObjectName(QStringLiteral("coreTab"));
        verticalLayout_10 = new QVBoxLayout(coreTab);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        ppu = new QGroupBox(coreTab);
        ppu->setObjectName(QStringLiteral("ppu"));
        verticalLayout_2 = new QVBoxLayout(ppu);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ppu_precise = new QRadioButton(ppu);
        ppuBG = new QButtonGroup(settings_dialog);
        ppuBG->setObjectName(QStringLiteral("ppuBG"));
        ppuBG->addButton(ppu_precise);
        ppu_precise->setObjectName(QStringLiteral("ppu_precise"));

        verticalLayout_2->addWidget(ppu_precise);

        ppu_fast = new QRadioButton(ppu);
        ppuBG->addButton(ppu_fast);
        ppu_fast->setObjectName(QStringLiteral("ppu_fast"));

        verticalLayout_2->addWidget(ppu_fast);

        ppu_llvm = new QRadioButton(ppu);
        ppuBG->addButton(ppu_llvm);
        ppu_llvm->setObjectName(QStringLiteral("ppu_llvm"));

        verticalLayout_2->addWidget(ppu_llvm);


        verticalLayout_8->addWidget(ppu);

        spu = new QGroupBox(coreTab);
        spu->setObjectName(QStringLiteral("spu"));
        verticalLayout_3 = new QVBoxLayout(spu);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        spu_precise = new QRadioButton(spu);
        spuBG = new QButtonGroup(settings_dialog);
        spuBG->setObjectName(QStringLiteral("spuBG"));
        spuBG->addButton(spu_precise);
        spu_precise->setObjectName(QStringLiteral("spu_precise"));

        verticalLayout_3->addWidget(spu_precise);

        spu_fast = new QRadioButton(spu);
        spuBG->addButton(spu_fast);
        spu_fast->setObjectName(QStringLiteral("spu_fast"));

        verticalLayout_3->addWidget(spu_fast);

        spu_asmjit = new QRadioButton(spu);
        spuBG->addButton(spu_asmjit);
        spu_asmjit->setObjectName(QStringLiteral("spu_asmjit"));

        verticalLayout_3->addWidget(spu_asmjit);

        spu_llvm = new QRadioButton(spu);
        spuBG->addButton(spu_llvm);
        spu_llvm->setObjectName(QStringLiteral("spu_llvm"));
        spu_llvm->setEnabled(false);

        verticalLayout_3->addWidget(spu_llvm);


        verticalLayout_8->addWidget(spu);

        checkboxes = new QGroupBox(coreTab);
        checkboxes->setObjectName(QStringLiteral("checkboxes"));
        verticalLayout_4 = new QVBoxLayout(checkboxes);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        hookStFunc = new QCheckBox(checkboxes);
        hookStFunc->setObjectName(QStringLiteral("hookStFunc"));

        verticalLayout_4->addWidget(hookStFunc);

        bindSPUThreads = new QCheckBox(checkboxes);
        bindSPUThreads->setObjectName(QStringLiteral("bindSPUThreads"));

        verticalLayout_4->addWidget(bindSPUThreads);

        lowerSPUThrPrio = new QCheckBox(checkboxes);
        lowerSPUThrPrio->setObjectName(QStringLiteral("lowerSPUThrPrio"));

        verticalLayout_4->addWidget(lowerSPUThrPrio);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout_8->addWidget(checkboxes);


        horizontalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        lib_settings = new QGroupBox(coreTab);
        lib_settings->setObjectName(QStringLiteral("lib_settings"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lib_settings->sizePolicy().hasHeightForWidth());
        lib_settings->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(lib_settings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lib_auto = new QRadioButton(lib_settings);
        lib_auto->setObjectName(QStringLiteral("lib_auto"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lib_auto->sizePolicy().hasHeightForWidth());
        lib_auto->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(lib_auto);

        lib_manu = new QRadioButton(lib_settings);
        lib_manu->setObjectName(QStringLiteral("lib_manu"));
        sizePolicy3.setHeightForWidth(lib_manu->sizePolicy().hasHeightForWidth());
        lib_manu->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(lib_manu);

        lib_both = new QRadioButton(lib_settings);
        lib_both->setObjectName(QStringLiteral("lib_both"));
        sizePolicy3.setHeightForWidth(lib_both->sizePolicy().hasHeightForWidth());
        lib_both->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(lib_both);

        lib_lv2 = new QRadioButton(lib_settings);
        lib_lv2->setObjectName(QStringLiteral("lib_lv2"));
        sizePolicy3.setHeightForWidth(lib_lv2->sizePolicy().hasHeightForWidth());
        lib_lv2->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(lib_lv2);


        verticalLayout_9->addWidget(lib_settings);

        groupBox_28 = new QGroupBox(coreTab);
        groupBox_28->setObjectName(QStringLiteral("groupBox_28"));
        sizePolicy3.setHeightForWidth(groupBox_28->sizePolicy().hasHeightForWidth());
        groupBox_28->setSizePolicy(sizePolicy3);
        verticalLayout_12 = new QVBoxLayout(groupBox_28);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        lleList = new QListWidget(groupBox_28);
        lleList->setObjectName(QStringLiteral("lleList"));
        lleList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lleList->setViewMode(QListView::ListMode);

        verticalLayout_12->addWidget(lleList);


        verticalLayout_9->addWidget(groupBox_28);

        groupBox_40 = new QGroupBox(coreTab);
        groupBox_40->setObjectName(QStringLiteral("groupBox_40"));
        verticalLayout_11 = new QVBoxLayout(groupBox_40);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        searchBox = new QLineEdit(groupBox_40);
        searchBox->setObjectName(QStringLiteral("searchBox"));

        verticalLayout_11->addWidget(searchBox);


        verticalLayout_9->addWidget(groupBox_40);


        horizontalLayout_2->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        groupBox_41 = new QGroupBox(coreTab);
        groupBox_41->setObjectName(QStringLiteral("groupBox_41"));
        verticalLayout_5 = new QVBoxLayout(groupBox_41);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_2 = new QLabel(groupBox_41);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setTextFormat(Qt::PlainText);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        verticalLayout_5->addWidget(label_2);


        verticalLayout_10->addWidget(groupBox_41);

        tabWidget->addTab(coreTab, QString());
        gpuTab = new QWidget();
        gpuTab->setObjectName(QStringLiteral("gpuTab"));
        verticalLayout_7 = new QVBoxLayout(gpuTab);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox_26 = new QGroupBox(gpuTab);
        groupBox_26->setObjectName(QStringLiteral("groupBox_26"));
        verticalLayout_19 = new QVBoxLayout(groupBox_26);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        renderBox = new QComboBox(groupBox_26);
        renderBox->setObjectName(QStringLiteral("renderBox"));

        verticalLayout_19->addWidget(renderBox);


        horizontalLayout_4->addWidget(groupBox_26);

        groupBox_29 = new QGroupBox(gpuTab);
        groupBox_29->setObjectName(QStringLiteral("groupBox_29"));
        verticalLayout_22 = new QVBoxLayout(groupBox_29);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        resBox = new QComboBox(groupBox_29);
        resBox->setObjectName(QStringLiteral("resBox"));

        verticalLayout_22->addWidget(resBox);


        horizontalLayout_4->addWidget(groupBox_29);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        groupBox_42 = new QGroupBox(gpuTab);
        groupBox_42->setObjectName(QStringLiteral("groupBox_42"));
        verticalLayout_18 = new QVBoxLayout(groupBox_42);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        graphicsAdapterBox = new QComboBox(groupBox_42);
        graphicsAdapterBox->setObjectName(QStringLiteral("graphicsAdapterBox"));

        verticalLayout_18->addWidget(graphicsAdapterBox);


        horizontalLayout_6->addWidget(groupBox_42);

        groupBox_43 = new QGroupBox(gpuTab);
        groupBox_43->setObjectName(QStringLiteral("groupBox_43"));
        groupBox_43->setEnabled(false);
        verticalLayout_21 = new QVBoxLayout(groupBox_43);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        pushButton_3 = new QPushButton(groupBox_43);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_21->addWidget(pushButton_3);


        horizontalLayout_6->addWidget(groupBox_43);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_44 = new QGroupBox(gpuTab);
        groupBox_44->setObjectName(QStringLiteral("groupBox_44"));
        verticalLayout_14 = new QVBoxLayout(groupBox_44);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        aspectBox = new QComboBox(groupBox_44);
        aspectBox->setObjectName(QStringLiteral("aspectBox"));

        verticalLayout_14->addWidget(aspectBox);


        horizontalLayout_3->addWidget(groupBox_44);

        groupBox_45 = new QGroupBox(gpuTab);
        groupBox_45->setObjectName(QStringLiteral("groupBox_45"));
        verticalLayout_15 = new QVBoxLayout(groupBox_45);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        frameLimitBox = new QComboBox(groupBox_45);
        frameLimitBox->setObjectName(QStringLiteral("frameLimitBox"));

        verticalLayout_15->addWidget(frameLimitBox);


        horizontalLayout_3->addWidget(groupBox_45);


        horizontalLayout_8->addLayout(horizontalLayout_3);

        widget = new QWidget(gpuTab);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout_8->addWidget(widget);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        groupBox_46 = new QGroupBox(gpuTab);
        groupBox_46->setObjectName(QStringLiteral("groupBox_46"));
        groupBox_46->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_16 = new QVBoxLayout(groupBox_46);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        dumpColor = new QCheckBox(groupBox_46);
        dumpColor->setObjectName(QStringLiteral("dumpColor"));

        verticalLayout_16->addWidget(dumpColor, 0, Qt::AlignTop);

        dumpDepth = new QCheckBox(groupBox_46);
        dumpDepth->setObjectName(QStringLiteral("dumpDepth"));

        verticalLayout_16->addWidget(dumpDepth);

        readColor = new QCheckBox(groupBox_46);
        readColor->setObjectName(QStringLiteral("readColor"));

        verticalLayout_16->addWidget(readColor);

        readDepth = new QCheckBox(groupBox_46);
        readDepth->setObjectName(QStringLiteral("readDepth"));

        verticalLayout_16->addWidget(readDepth);

        autoInvalidateCache = new QCheckBox(groupBox_46);
        autoInvalidateCache->setObjectName(QStringLiteral("autoInvalidateCache"));

        verticalLayout_16->addWidget(autoInvalidateCache);

        gpuTextureScaling = new QCheckBox(groupBox_46);
        gpuTextureScaling->setObjectName(QStringLiteral("gpuTextureScaling"));

        verticalLayout_16->addWidget(gpuTextureScaling);

        vsync = new QCheckBox(groupBox_46);
        vsync->setObjectName(QStringLiteral("vsync"));

        verticalLayout_16->addWidget(vsync);


        horizontalLayout_7->addWidget(groupBox_46, 0, Qt::AlignTop);

        groupBox_48 = new QGroupBox(gpuTab);
        groupBox_48->setObjectName(QStringLiteral("groupBox_48"));
        groupBox_48->setEnabled(true);
        groupBox_48->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_17 = new QVBoxLayout(groupBox_48);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        glLegacyBuffers = new QCheckBox(groupBox_48);
        glLegacyBuffers->setObjectName(QStringLiteral("glLegacyBuffers"));
        glLegacyBuffers->setEnabled(false);

        verticalLayout_17->addWidget(glLegacyBuffers, 0, Qt::AlignTop);

        debugOutput = new QCheckBox(groupBox_48);
        debugOutput->setObjectName(QStringLiteral("debugOutput"));

        verticalLayout_17->addWidget(debugOutput, 0, Qt::AlignTop);

        debugOverlay = new QCheckBox(groupBox_48);
        debugOverlay->setObjectName(QStringLiteral("debugOverlay"));

        verticalLayout_17->addWidget(debugOverlay);

        scrictModeRendering = new QCheckBox(groupBox_48);
        scrictModeRendering->setObjectName(QStringLiteral("scrictModeRendering"));

        verticalLayout_17->addWidget(scrictModeRendering);

        logProg = new QCheckBox(groupBox_48);
        logProg->setObjectName(QStringLiteral("logProg"));

        verticalLayout_17->addWidget(logProg);

        forceHighpZ = new QCheckBox(groupBox_48);
        forceHighpZ->setObjectName(QStringLiteral("forceHighpZ"));

        verticalLayout_17->addWidget(forceHighpZ, 0, Qt::AlignTop);


        horizontalLayout_7->addWidget(groupBox_48, 0, Qt::AlignTop);


        verticalLayout_7->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        groupBox_47 = new QGroupBox(gpuTab);
        groupBox_47->setObjectName(QStringLiteral("groupBox_47"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_47);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(groupBox_47);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setTextFormat(Qt::PlainText);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        horizontalLayout_5->addWidget(label_3);


        verticalLayout_7->addWidget(groupBox_47);

        tabWidget->addTab(gpuTab, QString());
        audioTab = new QWidget();
        audioTab->setObjectName(QStringLiteral("audioTab"));
        verticalLayout_26 = new QVBoxLayout(audioTab);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        groupBox_30 = new QGroupBox(audioTab);
        groupBox_30->setObjectName(QStringLiteral("groupBox_30"));
        verticalLayout_24 = new QVBoxLayout(groupBox_30);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        audioOutBox = new QComboBox(groupBox_30);
        audioOutBox->setObjectName(QStringLiteral("audioOutBox"));

        verticalLayout_24->addWidget(audioOutBox);


        verticalLayout_25->addWidget(groupBox_30);

        groupBox_49 = new QGroupBox(audioTab);
        groupBox_49->setObjectName(QStringLiteral("groupBox_49"));
        verticalLayout_23 = new QVBoxLayout(groupBox_49);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        audioDump = new QCheckBox(groupBox_49);
        audioDump->setObjectName(QStringLiteral("audioDump"));

        verticalLayout_23->addWidget(audioDump);

        convert = new QCheckBox(groupBox_49);
        convert->setObjectName(QStringLiteral("convert"));

        verticalLayout_23->addWidget(convert);

        downmix = new QCheckBox(groupBox_49);
        downmix->setObjectName(QStringLiteral("downmix"));
        downmix->setChecked(false);

        verticalLayout_23->addWidget(downmix);


        verticalLayout_25->addWidget(groupBox_49);


        horizontalLayout_9->addLayout(verticalLayout_25);

        widget_2 = new QWidget(audioTab);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        horizontalLayout_9->addWidget(widget_2);


        verticalLayout_26->addLayout(horizontalLayout_9);

        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_26->addItem(verticalSpacer_6);

        groupBox_50 = new QGroupBox(audioTab);
        groupBox_50->setObjectName(QStringLiteral("groupBox_50"));
        verticalLayout_20 = new QVBoxLayout(groupBox_50);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        label_4 = new QLabel(groupBox_50);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setTextFormat(Qt::PlainText);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4->setWordWrap(true);

        verticalLayout_20->addWidget(label_4);


        verticalLayout_26->addWidget(groupBox_50);

        tabWidget->addTab(audioTab, QString());
        inputTab = new QWidget();
        inputTab->setObjectName(QStringLiteral("inputTab"));
        verticalLayout_32 = new QVBoxLayout(inputTab);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        groupBox_52 = new QGroupBox(inputTab);
        groupBox_52->setObjectName(QStringLiteral("groupBox_52"));
        verticalLayout_29 = new QVBoxLayout(groupBox_52);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        padHandlerBox = new QComboBox(groupBox_52);
        padHandlerBox->setObjectName(QStringLiteral("padHandlerBox"));

        verticalLayout_29->addWidget(padHandlerBox);


        horizontalLayout_10->addWidget(groupBox_52);

        groupBox_31 = new QGroupBox(inputTab);
        groupBox_31->setObjectName(QStringLiteral("groupBox_31"));
        verticalLayout_30 = new QVBoxLayout(groupBox_31);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        cameraTypeBox = new QComboBox(groupBox_31);
        cameraTypeBox->setObjectName(QStringLiteral("cameraTypeBox"));

        verticalLayout_30->addWidget(cameraTypeBox);


        horizontalLayout_10->addWidget(groupBox_31);


        verticalLayout_32->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        groupBox_51 = new QGroupBox(inputTab);
        groupBox_51->setObjectName(QStringLiteral("groupBox_51"));
        verticalLayout_27 = new QVBoxLayout(groupBox_51);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        keyboardHandlerBox = new QComboBox(groupBox_51);
        keyboardHandlerBox->setObjectName(QStringLiteral("keyboardHandlerBox"));

        verticalLayout_27->addWidget(keyboardHandlerBox);


        horizontalLayout_11->addWidget(groupBox_51);

        groupBox_54 = new QGroupBox(inputTab);
        groupBox_54->setObjectName(QStringLiteral("groupBox_54"));
        verticalLayout_31 = new QVBoxLayout(groupBox_54);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        useFakeCamera = new QCheckBox(groupBox_54);
        useFakeCamera->setObjectName(QStringLiteral("useFakeCamera"));

        verticalLayout_31->addWidget(useFakeCamera);


        horizontalLayout_11->addWidget(groupBox_54);


        verticalLayout_32->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        groupBox_53 = new QGroupBox(inputTab);
        groupBox_53->setObjectName(QStringLiteral("groupBox_53"));
        verticalLayout_28 = new QVBoxLayout(groupBox_53);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        mouseHandlerBox = new QComboBox(groupBox_53);
        mouseHandlerBox->setObjectName(QStringLiteral("mouseHandlerBox"));

        verticalLayout_28->addWidget(mouseHandlerBox);


        horizontalLayout_12->addWidget(groupBox_53);

        widget_3 = new QWidget(inputTab);
        widget_3->setObjectName(QStringLiteral("widget_3"));

        horizontalLayout_12->addWidget(widget_3);


        verticalLayout_32->addLayout(horizontalLayout_12);

        verticalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_32->addItem(verticalSpacer_7);

        groupBox_59 = new QGroupBox(inputTab);
        groupBox_59->setObjectName(QStringLiteral("groupBox_59"));
        verticalLayout_33 = new QVBoxLayout(groupBox_59);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        label_5 = new QLabel(groupBox_59);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setTextFormat(Qt::PlainText);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5->setWordWrap(true);

        verticalLayout_33->addWidget(label_5);


        verticalLayout_32->addWidget(groupBox_59);

        tabWidget->addTab(inputTab, QString());
        systemTab = new QWidget();
        systemTab->setObjectName(QStringLiteral("systemTab"));
        verticalLayout_37 = new QVBoxLayout(systemTab);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        groupBox_34 = new QGroupBox(systemTab);
        groupBox_34->setObjectName(QStringLiteral("groupBox_34"));
        verticalLayout_34 = new QVBoxLayout(groupBox_34);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        sysLangBox = new QComboBox(groupBox_34);
        sysLangBox->setObjectName(QStringLiteral("sysLangBox"));

        verticalLayout_34->addWidget(sysLangBox);


        horizontalLayout_14->addWidget(groupBox_34);

        groupBox = new QGroupBox(systemTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_35 = new QVBoxLayout(groupBox);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        enableHostRoot = new QCheckBox(groupBox);
        enableHostRoot->setObjectName(QStringLiteral("enableHostRoot"));

        verticalLayout_35->addWidget(enableHostRoot);


        horizontalLayout_14->addWidget(groupBox);


        verticalLayout_37->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        groupBox_33 = new QGroupBox(systemTab);
        groupBox_33->setObjectName(QStringLiteral("groupBox_33"));
        groupBox_33->setEnabled(false);
        verticalLayout_36 = new QVBoxLayout(groupBox_33);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        comboBox_12 = new QComboBox(groupBox_33);
        comboBox_12->setObjectName(QStringLiteral("comboBox_12"));

        verticalLayout_36->addWidget(comboBox_12);


        horizontalLayout_15->addWidget(groupBox_33);

        widget_4 = new QWidget(systemTab);
        widget_4->setObjectName(QStringLiteral("widget_4"));

        horizontalLayout_15->addWidget(widget_4);


        verticalLayout_37->addLayout(horizontalLayout_15);

        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_37->addItem(verticalSpacer_8);

        groupBox_61 = new QGroupBox(systemTab);
        groupBox_61->setObjectName(QStringLiteral("groupBox_61"));
        horizontalLayout_13 = new QHBoxLayout(groupBox_61);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_7 = new QLabel(groupBox_61);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setTextFormat(Qt::PlainText);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_7->setWordWrap(true);

        horizontalLayout_13->addWidget(label_7);


        verticalLayout_37->addWidget(groupBox_61);

        tabWidget->addTab(systemTab, QString());
        groupBox_61->raise();
        networkTab = new QWidget();
        networkTab->setObjectName(QStringLiteral("networkTab"));
        verticalLayout_40 = new QVBoxLayout(networkTab);
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        groupBox_32 = new QGroupBox(networkTab);
        groupBox_32->setObjectName(QStringLiteral("groupBox_32"));
        verticalLayout_38 = new QVBoxLayout(groupBox_32);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        netStatusBox = new QComboBox(groupBox_32);
        netStatusBox->setObjectName(QStringLiteral("netStatusBox"));

        verticalLayout_38->addWidget(netStatusBox);


        horizontalLayout_16->addWidget(groupBox_32);

        widget_5 = new QWidget(networkTab);
        widget_5->setObjectName(QStringLiteral("widget_5"));

        horizontalLayout_16->addWidget(widget_5);


        verticalLayout_40->addLayout(horizontalLayout_16);

        verticalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_40->addItem(verticalSpacer_9);

        groupBox_60 = new QGroupBox(networkTab);
        groupBox_60->setObjectName(QStringLiteral("groupBox_60"));
        verticalLayout_39 = new QVBoxLayout(groupBox_60);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        label_6 = new QLabel(groupBox_60);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setTextFormat(Qt::PlainText);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6->setWordWrap(true);

        verticalLayout_39->addWidget(label_6);


        verticalLayout_40->addWidget(groupBox_60);

        tabWidget->addTab(networkTab, QString());
        emulatorTab = new QWidget();
        emulatorTab->setObjectName(QStringLiteral("emulatorTab"));
        verticalLayout_46 = new QVBoxLayout(emulatorTab);
        verticalLayout_46->setObjectName(QStringLiteral("verticalLayout_46"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        groupBox_55 = new QGroupBox(emulatorTab);
        groupBox_55->setObjectName(QStringLiteral("groupBox_55"));
        verticalLayout_41 = new QVBoxLayout(groupBox_55);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        exitOnStop = new QCheckBox(groupBox_55);
        exitOnStop->setObjectName(QStringLiteral("exitOnStop"));

        verticalLayout_41->addWidget(exitOnStop);

        alwaysStart = new QCheckBox(groupBox_55);
        alwaysStart->setObjectName(QStringLiteral("alwaysStart"));

        verticalLayout_41->addWidget(alwaysStart);

        startGameFullscreen = new QCheckBox(groupBox_55);
        startGameFullscreen->setObjectName(QStringLiteral("startGameFullscreen"));

        verticalLayout_41->addWidget(startGameFullscreen);

        showFPSInTitle = new QCheckBox(groupBox_55);
        showFPSInTitle->setObjectName(QStringLiteral("showFPSInTitle"));

        verticalLayout_41->addWidget(showFPSInTitle);


        horizontalLayout_17->addWidget(groupBox_55);

        gb_settings = new QGroupBox(emulatorTab);
        gb_settings->setObjectName(QStringLiteral("gb_settings"));
        verticalLayout_42 = new QVBoxLayout(gb_settings);
        verticalLayout_42->setObjectName(QStringLiteral("verticalLayout_42"));
        pb_reset_default = new QPushButton(gb_settings);
        pb_reset_default->setObjectName(QStringLiteral("pb_reset_default"));

        verticalLayout_42->addWidget(pb_reset_default);

        pb_backup_config = new QPushButton(gb_settings);
        pb_backup_config->setObjectName(QStringLiteral("pb_backup_config"));

        verticalLayout_42->addWidget(pb_backup_config);

        pb_open_folder = new QPushButton(gb_settings);
        pb_open_folder->setObjectName(QStringLiteral("pb_open_folder"));

        verticalLayout_42->addWidget(pb_open_folder);

        cb_show_welcome = new QCheckBox(gb_settings);
        cb_show_welcome->setObjectName(QStringLiteral("cb_show_welcome"));

        verticalLayout_42->addWidget(cb_show_welcome);


        horizontalLayout_17->addWidget(gb_settings);


        verticalLayout_46->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        gb_configs = new QGroupBox(emulatorTab);
        gb_configs->setObjectName(QStringLiteral("gb_configs"));
        verticalLayout_44 = new QVBoxLayout(gb_configs);
        verticalLayout_44->setObjectName(QStringLiteral("verticalLayout_44"));
        combo_configs = new QComboBox(gb_configs);
        combo_configs->setObjectName(QStringLiteral("combo_configs"));

        verticalLayout_44->addWidget(combo_configs);

        pb_apply_config = new QPushButton(gb_configs);
        pb_apply_config->setObjectName(QStringLiteral("pb_apply_config"));

        verticalLayout_44->addWidget(pb_apply_config);


        horizontalLayout_18->addWidget(gb_configs);

        gb_stylesheets = new QGroupBox(emulatorTab);
        gb_stylesheets->setObjectName(QStringLiteral("gb_stylesheets"));
        verticalLayout_43 = new QVBoxLayout(gb_stylesheets);
        verticalLayout_43->setObjectName(QStringLiteral("verticalLayout_43"));
        combo_stylesheets = new QComboBox(gb_stylesheets);
        combo_stylesheets->setObjectName(QStringLiteral("combo_stylesheets"));

        verticalLayout_43->addWidget(combo_stylesheets);

        pb_apply_stylesheet = new QPushButton(gb_stylesheets);
        pb_apply_stylesheet->setObjectName(QStringLiteral("pb_apply_stylesheet"));

        verticalLayout_43->addWidget(pb_apply_stylesheet);


        horizontalLayout_18->addWidget(gb_stylesheets);


        verticalLayout_46->addLayout(horizontalLayout_18);

        verticalSpacer_10 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_46->addItem(verticalSpacer_10);

        groupBox_62 = new QGroupBox(emulatorTab);
        groupBox_62->setObjectName(QStringLiteral("groupBox_62"));
        verticalLayout_45 = new QVBoxLayout(groupBox_62);
        verticalLayout_45->setObjectName(QStringLiteral("verticalLayout_45"));
        label_8 = new QLabel(groupBox_62);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setTextFormat(Qt::PlainText);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_8->setWordWrap(true);

        verticalLayout_45->addWidget(label_8);


        verticalLayout_46->addWidget(groupBox_62);

        tabWidget->addTab(emulatorTab, QString());
        groupBox_62->raise();

        verticalLayout_6->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        okButton = new QPushButton(settings_dialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton, 0, Qt::AlignLeft);

        cancelButton = new QPushButton(settings_dialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton, 0, Qt::AlignLeft);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout);


        retranslateUi(settings_dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(settings_dialog);
    } // setupUi

    void retranslateUi(QDialog *settings_dialog)
    {
        settings_dialog->setWindowTitle(QApplication::translate("settings_dialog", "Settings", Q_NULLPTR));
        ppu->setTitle(QApplication::translate("settings_dialog", "PPU Decoder", Q_NULLPTR));
        ppu_precise->setText(QApplication::translate("settings_dialog", "Interpreter (precise)", Q_NULLPTR));
        ppu_fast->setText(QApplication::translate("settings_dialog", "Interpreter (fast)", Q_NULLPTR));
        ppu_llvm->setText(QApplication::translate("settings_dialog", "Recompiler (LLVM)", Q_NULLPTR));
        spu->setTitle(QApplication::translate("settings_dialog", "SPU Decoder", Q_NULLPTR));
        spu_precise->setText(QApplication::translate("settings_dialog", "Interpreter (precise)", Q_NULLPTR));
        spu_fast->setText(QApplication::translate("settings_dialog", "Interpreter (fast)", Q_NULLPTR));
        spu_asmjit->setText(QApplication::translate("settings_dialog", "Recompiler (ASMJIT)", Q_NULLPTR));
        spu_llvm->setText(QApplication::translate("settings_dialog", "Recompiler (LLVM)", Q_NULLPTR));
        checkboxes->setTitle(QApplication::translate("settings_dialog", "Additional Settings", Q_NULLPTR));
        hookStFunc->setText(QApplication::translate("settings_dialog", "Hook Static Functions", Q_NULLPTR));
        bindSPUThreads->setText(QApplication::translate("settings_dialog", "Bind SPU threads to secondary cores", Q_NULLPTR));
        lowerSPUThrPrio->setText(QApplication::translate("settings_dialog", "Lower SPU thread priority", Q_NULLPTR));
        lib_settings->setTitle(QApplication::translate("settings_dialog", "Firmware Settings", Q_NULLPTR));
        lib_auto->setText(QApplication::translate("settings_dialog", "Automatically load required libraries", Q_NULLPTR));
        lib_manu->setText(QApplication::translate("settings_dialog", "Manually load selected libraries", Q_NULLPTR));
        lib_both->setText(QApplication::translate("settings_dialog", "Load automatic and manual libraries", Q_NULLPTR));
        lib_lv2->setText(QApplication::translate("settings_dialog", "Load liblv2.sprx only", Q_NULLPTR));
        groupBox_28->setTitle(QApplication::translate("settings_dialog", "Firmware Libraries", Q_NULLPTR));
        groupBox_40->setTitle(QApplication::translate("settings_dialog", "Search Libraries", Q_NULLPTR));
        groupBox_41->setTitle(QApplication::translate("settings_dialog", "Description", Q_NULLPTR));
        label_2->setText(QApplication::translate("settings_dialog", "CPU settings allow you to change both the PPU (Power Processing Element) and SPU (Synergistic Processing Unit) decoder modes. You can also adjust firmware settings for the emulated console. These settings allow you to load firmware libraries automatically, manually or both at the same time as well as on-the-fly.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(coreTab), QApplication::translate("settings_dialog", "CPU", Q_NULLPTR));
        groupBox_26->setTitle(QApplication::translate("settings_dialog", "Renderer", Q_NULLPTR));
        groupBox_29->setTitle(QApplication::translate("settings_dialog", "Resolution", Q_NULLPTR));
        groupBox_42->setTitle(QApplication::translate("settings_dialog", "Graphics Device", Q_NULLPTR));
        groupBox_43->setTitle(QApplication::translate("settings_dialog", "Enhancements", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("settings_dialog", "Advanced Settings", Q_NULLPTR));
        groupBox_44->setTitle(QApplication::translate("settings_dialog", "Aspect Ratio", Q_NULLPTR));
        groupBox_45->setTitle(QApplication::translate("settings_dialog", "Framelimit", Q_NULLPTR));
        groupBox_46->setTitle(QApplication::translate("settings_dialog", "Additional Settings", Q_NULLPTR));
        dumpColor->setText(QApplication::translate("settings_dialog", "Write Color Buffers", Q_NULLPTR));
        dumpDepth->setText(QApplication::translate("settings_dialog", "Write Depth Buffers", Q_NULLPTR));
        readColor->setText(QApplication::translate("settings_dialog", "Read Color Buffers", Q_NULLPTR));
        readDepth->setText(QApplication::translate("settings_dialog", "Read Depth Buffers", Q_NULLPTR));
        autoInvalidateCache->setText(QApplication::translate("settings_dialog", "Invalidate Cache Every Frame", Q_NULLPTR));
        gpuTextureScaling->setText(QApplication::translate("settings_dialog", "Use GPU Texture Scaling", Q_NULLPTR));
        vsync->setText(QApplication::translate("settings_dialog", "Use Vertical Sync", Q_NULLPTR));
        groupBox_48->setTitle(QApplication::translate("settings_dialog", "Debugging Settings", Q_NULLPTR));
        glLegacyBuffers->setText(QApplication::translate("settings_dialog", "Use Legacy OpenGL Buffers", Q_NULLPTR));
        debugOutput->setText(QApplication::translate("settings_dialog", "Debug Output", Q_NULLPTR));
        debugOverlay->setText(QApplication::translate("settings_dialog", "Debug Overlay", Q_NULLPTR));
        scrictModeRendering->setText(QApplication::translate("settings_dialog", "Strict Rendering Mode", Q_NULLPTR));
        logProg->setText(QApplication::translate("settings_dialog", "Log Shader Programs", Q_NULLPTR));
        forceHighpZ->setText(QApplication::translate("settings_dialog", "Use High Precision Z-buffer", Q_NULLPTR));
        groupBox_47->setTitle(QApplication::translate("settings_dialog", "Description", Q_NULLPTR));
        label_3->setText(QApplication::translate("settings_dialog", "GPU settings allow you to change the rendering backend of the emulated console. You can also choose your preferred graphics device for GPU specific rendering APIs as well as adjust the output resolution, aspect ratio and framelimit of the emulated console. Additional enhancement settings will be added in the future.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(gpuTab), QApplication::translate("settings_dialog", "GPU", Q_NULLPTR));
        groupBox_30->setTitle(QApplication::translate("settings_dialog", "Audio Out", Q_NULLPTR));
        groupBox_49->setTitle(QApplication::translate("settings_dialog", "Audio Settings", Q_NULLPTR));
        audioDump->setText(QApplication::translate("settings_dialog", "Dump to File", Q_NULLPTR));
        convert->setText(QApplication::translate("settings_dialog", "Convert to 16-bit", Q_NULLPTR));
        downmix->setText(QApplication::translate("settings_dialog", "Downmix to Stereo", Q_NULLPTR));
        groupBox_50->setTitle(QApplication::translate("settings_dialog", "Description", Q_NULLPTR));
        label_4->setText(QApplication::translate("settings_dialog", "Audio settings allow you to change the way audio is encoded and handled by the emulator. More detailed settings will be added in the future.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(audioTab), QApplication::translate("settings_dialog", "Audio", Q_NULLPTR));
        groupBox_52->setTitle(QApplication::translate("settings_dialog", "Controller Handler", Q_NULLPTR));
        groupBox_31->setTitle(QApplication::translate("settings_dialog", "Camera Input", Q_NULLPTR));
        groupBox_51->setTitle(QApplication::translate("settings_dialog", "Keyboard Handler", Q_NULLPTR));
        groupBox_54->setTitle(QApplication::translate("settings_dialog", "Camera Settings", Q_NULLPTR));
        useFakeCamera->setText(QApplication::translate("settings_dialog", "Use Fake Camera", Q_NULLPTR));
        groupBox_53->setTitle(QApplication::translate("settings_dialog", "Mouse Handler", Q_NULLPTR));
        groupBox_59->setTitle(QApplication::translate("settings_dialog", "Description", Q_NULLPTR));
        label_5->setText(QApplication::translate("settings_dialog", "I/O settings allow you to change controller, keyboard and mouse handlers as well as PlayStation camera inputs. More detailed settings will be added in the future.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(inputTab), QApplication::translate("settings_dialog", "I/O", Q_NULLPTR));
        groupBox_34->setTitle(QApplication::translate("settings_dialog", "Console Language", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("settings_dialog", "Homebrew", Q_NULLPTR));
        enableHostRoot->setText(QApplication::translate("settings_dialog", "Enable /host_root/", Q_NULLPTR));
        groupBox_33->setTitle(QApplication::translate("settings_dialog", "Console Region", Q_NULLPTR));
        groupBox_61->setTitle(QApplication::translate("settings_dialog", "Description", Q_NULLPTR));
        label_7->setText(QApplication::translate("settings_dialog", "System settings allow you change basic system settings found within a real PlayStation 3 system. Depending on the application in use, the console language setting will change the language of the application accordingly. More detailed settings will be added in the future.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(systemTab), QApplication::translate("settings_dialog", "System", Q_NULLPTR));
        groupBox_32->setTitle(QApplication::translate("settings_dialog", "Network Status", Q_NULLPTR));
        groupBox_60->setTitle(QApplication::translate("settings_dialog", "Description", Q_NULLPTR));
        label_6->setText(QApplication::translate("settings_dialog", "Network settings allow you to change basic network settings found within a real PlayStation 3 system. More detailed settings may or may not be added in the future.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(networkTab), QApplication::translate("settings_dialog", "Network", Q_NULLPTR));
        groupBox_55->setTitle(QApplication::translate("settings_dialog", "Emulator Settings", Q_NULLPTR));
        exitOnStop->setText(QApplication::translate("settings_dialog", "Exit RPCS3 when process finishes", Q_NULLPTR));
        alwaysStart->setText(QApplication::translate("settings_dialog", "Automatically start games after boot", Q_NULLPTR));
        startGameFullscreen->setText(QApplication::translate("settings_dialog", "Start games in Fullscreen mode", Q_NULLPTR));
        showFPSInTitle->setText(QApplication::translate("settings_dialog", "Show framerate counter in window title", Q_NULLPTR));
        gb_settings->setTitle(QApplication::translate("settings_dialog", "UI Settings", Q_NULLPTR));
        pb_reset_default->setText(QApplication::translate("settings_dialog", "Restore default settings", Q_NULLPTR));
        pb_backup_config->setText(QApplication::translate("settings_dialog", "Save current settings", Q_NULLPTR));
        pb_open_folder->setText(QApplication::translate("settings_dialog", "Open configuration folder", Q_NULLPTR));
        cb_show_welcome->setText(QApplication::translate("settings_dialog", "Show Welcome Screen", Q_NULLPTR));
        gb_configs->setTitle(QApplication::translate("settings_dialog", "UI Configurations", Q_NULLPTR));
        pb_apply_config->setText(QApplication::translate("settings_dialog", "Apply", Q_NULLPTR));
        gb_stylesheets->setTitle(QApplication::translate("settings_dialog", "UI Stylesheets", Q_NULLPTR));
        pb_apply_stylesheet->setText(QApplication::translate("settings_dialog", "Apply", Q_NULLPTR));
        groupBox_62->setTitle(QApplication::translate("settings_dialog", "Description", Q_NULLPTR));
        label_8->setText(QApplication::translate("settings_dialog", "Emulator settings allow you to set personal preferences within the emulator such as automatic exit when a process is finished, starting games after boot and allowing games to automatically boot into fullscreen mode. You can also create your own stylesheets which can be used as themes for a more personal experience. ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(emulatorTab), QApplication::translate("settings_dialog", "Emulator", Q_NULLPTR));
        okButton->setText(QApplication::translate("settings_dialog", "Save", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("settings_dialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settings_dialog: public Ui_settings_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_DIALOG_H
