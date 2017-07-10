/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_window
{
public:
    QAction *bootElfAct;
    QAction *bootGameAct;
    QAction *bootInstallPkgAct;
    QAction *bootInstallPupAct;
    QAction *sysPauseAct;
    QAction *sysStopAct;
    QAction *sysSendOpenMenuAct;
    QAction *sysSendExitAct;
    QAction *confCPUAct;
    QAction *confGPUAct;
    QAction *confPadAct;
    QAction *confAudioAct;
    QAction *confIOAct;
    QAction *confSystemAct;
    QAction *confAutopauseManagerAct;
    QAction *exitAct;
    QAction *confSavedataManagerAct;
    QAction *actionManage_Trophy_Data;
    QAction *actionManage_Users;
    QAction *actionManage_yml_Patches;
    QAction *toolsCgDisasmAct;
    QAction *toolskernel_explorerAct;
    QAction *toolsmemory_viewerAct;
    QAction *toolsRsxDebuggerAct;
    QAction *toolsStringSearchAct;
    QAction *toolsDecryptSprxLibsAct;
    QAction *showDebuggerAct;
    QAction *showLogAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
    QAction *actionShow_Controls;
    QAction *showGameListAct;
    QAction *showToolBarAct;
    QAction *refreshGameListAct;
    QAction *actionShow_Categories;
    QAction *actionManage_RAP_Licences;
    QAction *actionCheck_for_Updates;
    QAction *confVFSDialogAct;
    QAction *clearRecentAct;
    QAction *freezeRecentAct;
    QAction *setIconSizeTinyAct;
    QAction *setIconSizeSmallAct;
    QAction *setIconSizeMediumAct;
    QAction *setIconSizeLargeAct;
    QAction *setlistModeListAct;
    QAction *setlistModeGridAct;
    QAction *sysRebootAct;
    QAction *actionPause;
    QAction *actionSave_State;
    QAction *showCatHDDGameAct;
    QAction *showCatDiscGameAct;
    QAction *showCatHomeAct;
    QAction *showCatAudioVideoAct;
    QAction *showCatGameDataAct;
    QAction *showCatUnknownAct;
    QAction *captureFrame;
    QAction *toolbar_start;
    QAction *toolbar_stop;
    QAction *toolbar_config;
    QAction *toolbar_controls;
    QAction *toolbar_snap;
    QAction *toolbar_fullscreen;
    QAction *toolbar_list;
    QAction *toolbar_grid;
    QAction *toolbar_sort;
    QAction *toolbar_refresh;
    QAction *toolbar_disc;
    QAction *showCatOtherAct;
    QAction *showGameToolBarAct;
    QAction *actionNetwork;
    QAction *actionEmulator;
    QWidget *centralWidget;
    QLineEdit *searchBar;
    QSlider *sizeSlider;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *bootRecentMenu;
    QMenu *menuEmulation;
    QMenu *menuConfiguration;
    QMenu *menuManage;
    QMenu *menuUtilities;
    QMenu *menuView;
    QMenu *menuGame_List_Icons;
    QMenu *menuGame_List_Mode;
    QMenu *menuGame_Categories;
    QMenu *menuHelp;
    QToolBar *toolBar;

    void setupUi(QMainWindow *main_window)
    {
        if (main_window->objectName().isEmpty())
            main_window->setObjectName(QStringLiteral("main_window"));
        main_window->resize(1058, 580);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(main_window->sizePolicy().hasHeightForWidth());
        main_window->setSizePolicy(sizePolicy);
        main_window->setMinimumSize(QSize(4, 0));
        main_window->setAutoFillBackground(false);
        main_window->setAnimated(true);
        main_window->setDockNestingEnabled(true);
        main_window->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::GroupedDragging);
        bootElfAct = new QAction(main_window);
        bootElfAct->setObjectName(QStringLiteral("bootElfAct"));
        bootGameAct = new QAction(main_window);
        bootGameAct->setObjectName(QStringLiteral("bootGameAct"));
        bootInstallPkgAct = new QAction(main_window);
        bootInstallPkgAct->setObjectName(QStringLiteral("bootInstallPkgAct"));
        bootInstallPupAct = new QAction(main_window);
        bootInstallPupAct->setObjectName(QStringLiteral("bootInstallPupAct"));
        sysPauseAct = new QAction(main_window);
        sysPauseAct->setObjectName(QStringLiteral("sysPauseAct"));
        sysPauseAct->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        sysPauseAct->setIcon(icon);
        sysStopAct = new QAction(main_window);
        sysStopAct->setObjectName(QStringLiteral("sysStopAct"));
        sysStopAct->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        sysStopAct->setIcon(icon1);
        sysSendOpenMenuAct = new QAction(main_window);
        sysSendOpenMenuAct->setObjectName(QStringLiteral("sysSendOpenMenuAct"));
        sysSendOpenMenuAct->setEnabled(false);
        sysSendExitAct = new QAction(main_window);
        sysSendExitAct->setObjectName(QStringLiteral("sysSendExitAct"));
        sysSendExitAct->setEnabled(false);
        confCPUAct = new QAction(main_window);
        confCPUAct->setObjectName(QStringLiteral("confCPUAct"));
        confGPUAct = new QAction(main_window);
        confGPUAct->setObjectName(QStringLiteral("confGPUAct"));
        confPadAct = new QAction(main_window);
        confPadAct->setObjectName(QStringLiteral("confPadAct"));
        confAudioAct = new QAction(main_window);
        confAudioAct->setObjectName(QStringLiteral("confAudioAct"));
        confIOAct = new QAction(main_window);
        confIOAct->setObjectName(QStringLiteral("confIOAct"));
        confSystemAct = new QAction(main_window);
        confSystemAct->setObjectName(QStringLiteral("confSystemAct"));
        confAutopauseManagerAct = new QAction(main_window);
        confAutopauseManagerAct->setObjectName(QStringLiteral("confAutopauseManagerAct"));
        confAutopauseManagerAct->setEnabled(false);
        exitAct = new QAction(main_window);
        exitAct->setObjectName(QStringLiteral("exitAct"));
        confSavedataManagerAct = new QAction(main_window);
        confSavedataManagerAct->setObjectName(QStringLiteral("confSavedataManagerAct"));
        confSavedataManagerAct->setEnabled(false);
        actionManage_Trophy_Data = new QAction(main_window);
        actionManage_Trophy_Data->setObjectName(QStringLiteral("actionManage_Trophy_Data"));
        actionManage_Trophy_Data->setEnabled(false);
        actionManage_Users = new QAction(main_window);
        actionManage_Users->setObjectName(QStringLiteral("actionManage_Users"));
        actionManage_Users->setEnabled(false);
        actionManage_yml_Patches = new QAction(main_window);
        actionManage_yml_Patches->setObjectName(QStringLiteral("actionManage_yml_Patches"));
        actionManage_yml_Patches->setEnabled(false);
        toolsCgDisasmAct = new QAction(main_window);
        toolsCgDisasmAct->setObjectName(QStringLiteral("toolsCgDisasmAct"));
        toolskernel_explorerAct = new QAction(main_window);
        toolskernel_explorerAct->setObjectName(QStringLiteral("toolskernel_explorerAct"));
        toolskernel_explorerAct->setEnabled(false);
        toolsmemory_viewerAct = new QAction(main_window);
        toolsmemory_viewerAct->setObjectName(QStringLiteral("toolsmemory_viewerAct"));
        toolsmemory_viewerAct->setEnabled(false);
        toolsRsxDebuggerAct = new QAction(main_window);
        toolsRsxDebuggerAct->setObjectName(QStringLiteral("toolsRsxDebuggerAct"));
        toolsRsxDebuggerAct->setEnabled(false);
        toolsStringSearchAct = new QAction(main_window);
        toolsStringSearchAct->setObjectName(QStringLiteral("toolsStringSearchAct"));
        toolsStringSearchAct->setEnabled(false);
        toolsDecryptSprxLibsAct = new QAction(main_window);
        toolsDecryptSprxLibsAct->setObjectName(QStringLiteral("toolsDecryptSprxLibsAct"));
        showDebuggerAct = new QAction(main_window);
        showDebuggerAct->setObjectName(QStringLiteral("showDebuggerAct"));
        showDebuggerAct->setCheckable(true);
        showLogAct = new QAction(main_window);
        showLogAct->setObjectName(QStringLiteral("showLogAct"));
        showLogAct->setCheckable(true);
        aboutAct = new QAction(main_window);
        aboutAct->setObjectName(QStringLiteral("aboutAct"));
        aboutQtAct = new QAction(main_window);
        aboutQtAct->setObjectName(QStringLiteral("aboutQtAct"));
        actionShow_Controls = new QAction(main_window);
        actionShow_Controls->setObjectName(QStringLiteral("actionShow_Controls"));
        showGameListAct = new QAction(main_window);
        showGameListAct->setObjectName(QStringLiteral("showGameListAct"));
        showGameListAct->setCheckable(true);
        showToolBarAct = new QAction(main_window);
        showToolBarAct->setObjectName(QStringLiteral("showToolBarAct"));
        showToolBarAct->setCheckable(true);
        refreshGameListAct = new QAction(main_window);
        refreshGameListAct->setObjectName(QStringLiteral("refreshGameListAct"));
        actionShow_Categories = new QAction(main_window);
        actionShow_Categories->setObjectName(QStringLiteral("actionShow_Categories"));
        actionManage_RAP_Licences = new QAction(main_window);
        actionManage_RAP_Licences->setObjectName(QStringLiteral("actionManage_RAP_Licences"));
        actionManage_RAP_Licences->setEnabled(false);
        actionCheck_for_Updates = new QAction(main_window);
        actionCheck_for_Updates->setObjectName(QStringLiteral("actionCheck_for_Updates"));
        actionCheck_for_Updates->setEnabled(false);
        confVFSDialogAct = new QAction(main_window);
        confVFSDialogAct->setObjectName(QStringLiteral("confVFSDialogAct"));
        clearRecentAct = new QAction(main_window);
        clearRecentAct->setObjectName(QStringLiteral("clearRecentAct"));
        freezeRecentAct = new QAction(main_window);
        freezeRecentAct->setObjectName(QStringLiteral("freezeRecentAct"));
        freezeRecentAct->setCheckable(true);
        setIconSizeTinyAct = new QAction(main_window);
        setIconSizeTinyAct->setObjectName(QStringLiteral("setIconSizeTinyAct"));
        setIconSizeTinyAct->setCheckable(true);
        setIconSizeSmallAct = new QAction(main_window);
        setIconSizeSmallAct->setObjectName(QStringLiteral("setIconSizeSmallAct"));
        setIconSizeSmallAct->setCheckable(true);
        setIconSizeSmallAct->setChecked(true);
        setIconSizeMediumAct = new QAction(main_window);
        setIconSizeMediumAct->setObjectName(QStringLiteral("setIconSizeMediumAct"));
        setIconSizeMediumAct->setCheckable(true);
        setIconSizeLargeAct = new QAction(main_window);
        setIconSizeLargeAct->setObjectName(QStringLiteral("setIconSizeLargeAct"));
        setIconSizeLargeAct->setCheckable(true);
        setlistModeListAct = new QAction(main_window);
        setlistModeListAct->setObjectName(QStringLiteral("setlistModeListAct"));
        setlistModeListAct->setCheckable(true);
        setlistModeListAct->setChecked(true);
        setlistModeGridAct = new QAction(main_window);
        setlistModeGridAct->setObjectName(QStringLiteral("setlistModeGridAct"));
        setlistModeGridAct->setCheckable(true);
        sysRebootAct = new QAction(main_window);
        sysRebootAct->setObjectName(QStringLiteral("sysRebootAct"));
        sysRebootAct->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icons/restart.png"), QSize(), QIcon::Normal, QIcon::Off);
        sysRebootAct->setIcon(icon2);
        actionPause = new QAction(main_window);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionSave_State = new QAction(main_window);
        actionSave_State->setObjectName(QStringLiteral("actionSave_State"));
        showCatHDDGameAct = new QAction(main_window);
        showCatHDDGameAct->setObjectName(QStringLiteral("showCatHDDGameAct"));
        showCatHDDGameAct->setCheckable(true);
        showCatHDDGameAct->setChecked(true);
        showCatDiscGameAct = new QAction(main_window);
        showCatDiscGameAct->setObjectName(QStringLiteral("showCatDiscGameAct"));
        showCatDiscGameAct->setCheckable(true);
        showCatDiscGameAct->setChecked(true);
        showCatHomeAct = new QAction(main_window);
        showCatHomeAct->setObjectName(QStringLiteral("showCatHomeAct"));
        showCatHomeAct->setCheckable(true);
        showCatHomeAct->setChecked(true);
        showCatAudioVideoAct = new QAction(main_window);
        showCatAudioVideoAct->setObjectName(QStringLiteral("showCatAudioVideoAct"));
        showCatAudioVideoAct->setCheckable(true);
        showCatAudioVideoAct->setChecked(true);
        showCatGameDataAct = new QAction(main_window);
        showCatGameDataAct->setObjectName(QStringLiteral("showCatGameDataAct"));
        showCatGameDataAct->setCheckable(true);
        showCatGameDataAct->setChecked(true);
        showCatUnknownAct = new QAction(main_window);
        showCatUnknownAct->setObjectName(QStringLiteral("showCatUnknownAct"));
        showCatUnknownAct->setCheckable(true);
        showCatUnknownAct->setChecked(true);
        captureFrame = new QAction(main_window);
        captureFrame->setObjectName(QStringLiteral("captureFrame"));
        toolbar_start = new QAction(main_window);
        toolbar_start->setObjectName(QStringLiteral("toolbar_start"));
        toolbar_start->setIcon(icon);
        toolbar_stop = new QAction(main_window);
        toolbar_stop->setObjectName(QStringLiteral("toolbar_stop"));
        toolbar_stop->setIcon(icon1);
        toolbar_config = new QAction(main_window);
        toolbar_config->setObjectName(QStringLiteral("toolbar_config"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_config->setIcon(icon3);
        toolbar_controls = new QAction(main_window);
        toolbar_controls->setObjectName(QStringLiteral("toolbar_controls"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icons/controls.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_controls->setIcon(icon4);
        toolbar_snap = new QAction(main_window);
        toolbar_snap->setObjectName(QStringLiteral("toolbar_snap"));
        toolbar_snap->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Icons/screenshot.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_snap->setIcon(icon5);
        toolbar_snap->setVisible(false);
        toolbar_snap->setIconVisibleInMenu(true);
        toolbar_fullscreen = new QAction(main_window);
        toolbar_fullscreen->setObjectName(QStringLiteral("toolbar_fullscreen"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Icons/fullscreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_fullscreen->setIcon(icon6);
        toolbar_list = new QAction(main_window);
        toolbar_list->setObjectName(QStringLiteral("toolbar_list"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Icons/list.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_list->setIcon(icon7);
        toolbar_grid = new QAction(main_window);
        toolbar_grid->setObjectName(QStringLiteral("toolbar_grid"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Icons/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_grid->setIcon(icon8);
        toolbar_sort = new QAction(main_window);
        toolbar_sort->setObjectName(QStringLiteral("toolbar_sort"));
        toolbar_sort->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Icons/sort.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_sort->setIcon(icon9);
        toolbar_sort->setVisible(false);
        toolbar_sort->setIconVisibleInMenu(true);
        toolbar_refresh = new QAction(main_window);
        toolbar_refresh->setObjectName(QStringLiteral("toolbar_refresh"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Icons/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_refresh->setIcon(icon10);
        toolbar_disc = new QAction(main_window);
        toolbar_disc->setObjectName(QStringLiteral("toolbar_disc"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Icons/disc.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolbar_disc->setIcon(icon11);
        showCatOtherAct = new QAction(main_window);
        showCatOtherAct->setObjectName(QStringLiteral("showCatOtherAct"));
        showCatOtherAct->setCheckable(true);
        showCatOtherAct->setChecked(true);
        showGameToolBarAct = new QAction(main_window);
        showGameToolBarAct->setObjectName(QStringLiteral("showGameToolBarAct"));
        showGameToolBarAct->setCheckable(true);
        actionNetwork = new QAction(main_window);
        actionNetwork->setObjectName(QStringLiteral("actionNetwork"));
        actionEmulator = new QAction(main_window);
        actionEmulator->setObjectName(QStringLiteral("actionEmulator"));
        centralWidget = new QWidget(main_window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        searchBar = new QLineEdit(centralWidget);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(480, 10, 251, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchBar->sizePolicy().hasHeightForWidth());
        searchBar->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        searchBar->setFont(font);
        searchBar->setFocusPolicy(Qt::ClickFocus);
        searchBar->setStyleSheet(QLatin1String("color:#5e5e5e;\n"
"margin-left:14px;"));
        searchBar->setFrame(false);
        searchBar->setClearButtonEnabled(false);
        sizeSlider = new QSlider(centralWidget);
        sizeSlider->setObjectName(QStringLiteral("sizeSlider"));
        sizeSlider->setGeometry(QRect(290, 20, 160, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sizeSlider->sizePolicy().hasHeightForWidth());
        sizeSlider->setSizePolicy(sizePolicy2);
        sizeSlider->setFocusPolicy(Qt::ClickFocus);
        sizeSlider->setStyleSheet(QLatin1String("QSlider::handle:horizontal {\n"
"	background: #404040;\n"
"}\n"
"\n"
"QSlider {\n"
"	padding-left: 6px;\n"
"	padding-right:6px\n"
"}"));
        sizeSlider->setOrientation(Qt::Horizontal);
        sizeSlider->setTickPosition(QSlider::NoTicks);
        main_window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(main_window);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1058, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        bootRecentMenu = new QMenu(menuFile);
        bootRecentMenu->setObjectName(QStringLiteral("bootRecentMenu"));
        bootRecentMenu->setEnabled(true);
        menuEmulation = new QMenu(menuBar);
        menuEmulation->setObjectName(QStringLiteral("menuEmulation"));
        menuConfiguration = new QMenu(menuBar);
        menuConfiguration->setObjectName(QStringLiteral("menuConfiguration"));
        menuManage = new QMenu(menuBar);
        menuManage->setObjectName(QStringLiteral("menuManage"));
        menuUtilities = new QMenu(menuBar);
        menuUtilities->setObjectName(QStringLiteral("menuUtilities"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuGame_List_Icons = new QMenu(menuView);
        menuGame_List_Icons->setObjectName(QStringLiteral("menuGame_List_Icons"));
        menuGame_List_Mode = new QMenu(menuView);
        menuGame_List_Mode->setObjectName(QStringLiteral("menuGame_List_Mode"));
        menuGame_Categories = new QMenu(menuView);
        menuGame_Categories->setObjectName(QStringLiteral("menuGame_Categories"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        main_window->setMenuBar(menuBar);
        toolBar = new QToolBar(main_window);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        toolBar->setStyleSheet(QLatin1String("background-color: rgb(227, 227, 227);\n"
"selection-background-color: rgb(85, 170, 255);"));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::TopToolBarArea);
        toolBar->setIconSize(QSize(30, 30));
        toolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolBar->setFloatable(false);
        main_window->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEmulation->menuAction());
        menuBar->addAction(menuConfiguration->menuAction());
        menuBar->addAction(menuManage->menuAction());
        menuBar->addAction(menuUtilities->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(bootElfAct);
        menuFile->addAction(bootGameAct);
        menuFile->addAction(bootRecentMenu->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(bootInstallPkgAct);
        menuFile->addAction(bootInstallPupAct);
        menuFile->addSeparator();
        menuFile->addAction(exitAct);
        bootRecentMenu->addAction(clearRecentAct);
        bootRecentMenu->addAction(freezeRecentAct);
        bootRecentMenu->addSeparator();
        menuEmulation->addAction(sysPauseAct);
        menuEmulation->addAction(sysStopAct);
        menuEmulation->addAction(sysRebootAct);
        menuEmulation->addSeparator();
        menuEmulation->addAction(captureFrame);
        menuEmulation->addSeparator();
        menuEmulation->addAction(sysSendOpenMenuAct);
        menuEmulation->addAction(sysSendExitAct);
        menuConfiguration->addAction(confCPUAct);
        menuConfiguration->addAction(confGPUAct);
        menuConfiguration->addSeparator();
        menuConfiguration->addAction(confPadAct);
        menuConfiguration->addAction(confAudioAct);
        menuConfiguration->addAction(confIOAct);
        menuConfiguration->addAction(confSystemAct);
        menuConfiguration->addSeparator();
        menuConfiguration->addAction(confAutopauseManagerAct);
        menuManage->addAction(confVFSDialogAct);
        menuManage->addSeparator();
        menuManage->addAction(actionManage_Users);
        menuManage->addAction(confSavedataManagerAct);
        menuManage->addAction(actionManage_RAP_Licences);
        menuManage->addAction(actionManage_Trophy_Data);
        menuUtilities->addAction(toolsCgDisasmAct);
        menuUtilities->addAction(toolskernel_explorerAct);
        menuUtilities->addAction(toolsmemory_viewerAct);
        menuUtilities->addAction(toolsRsxDebuggerAct);
        menuUtilities->addAction(toolsStringSearchAct);
        menuUtilities->addSeparator();
        menuUtilities->addAction(toolsDecryptSprxLibsAct);
        menuView->addAction(showDebuggerAct);
        menuView->addAction(showLogAct);
        menuView->addSeparator();
        menuView->addAction(showToolBarAct);
        menuView->addSeparator();
        menuView->addAction(showGameListAct);
        menuView->addAction(showGameToolBarAct);
        menuView->addSeparator();
        menuView->addAction(refreshGameListAct);
        menuView->addAction(menuGame_List_Mode->menuAction());
        menuView->addAction(menuGame_List_Icons->menuAction());
        menuView->addAction(menuGame_Categories->menuAction());
        menuGame_List_Icons->addAction(setIconSizeTinyAct);
        menuGame_List_Icons->addAction(setIconSizeSmallAct);
        menuGame_List_Icons->addAction(setIconSizeMediumAct);
        menuGame_List_Icons->addAction(setIconSizeLargeAct);
        menuGame_List_Mode->addAction(setlistModeListAct);
        menuGame_List_Mode->addAction(setlistModeGridAct);
        menuGame_Categories->addAction(showCatHDDGameAct);
        menuGame_Categories->addAction(showCatDiscGameAct);
        menuGame_Categories->addAction(showCatHomeAct);
        menuGame_Categories->addAction(showCatAudioVideoAct);
        menuGame_Categories->addAction(showCatGameDataAct);
        menuGame_Categories->addAction(showCatUnknownAct);
        menuGame_Categories->addAction(showCatOtherAct);
        menuHelp->addAction(actionCheck_for_Updates);
        menuHelp->addSeparator();
        menuHelp->addAction(aboutAct);
        menuHelp->addAction(aboutQtAct);
        toolBar->addAction(toolbar_disc);
        toolBar->addAction(toolbar_fullscreen);
        toolBar->addAction(toolbar_snap);
        toolBar->addSeparator();
        toolBar->addAction(toolbar_stop);
        toolBar->addAction(toolbar_start);
        toolBar->addSeparator();
        toolBar->addAction(toolbar_controls);
        toolBar->addAction(toolbar_config);
        toolBar->addSeparator();
        toolBar->addAction(toolbar_refresh);
        toolBar->addAction(toolbar_list);
        toolBar->addAction(toolbar_grid);
        toolBar->addAction(toolbar_sort);
        toolBar->addSeparator();

        retranslateUi(main_window);

        QMetaObject::connectSlotsByName(main_window);
    } // setupUi

    void retranslateUi(QMainWindow *main_window)
    {
        main_window->setWindowTitle(QApplication::translate("main_window", "RPCS3", Q_NULLPTR));
        bootElfAct->setText(QApplication::translate("main_window", "Boot SELF/ELF", Q_NULLPTR));
        bootGameAct->setText(QApplication::translate("main_window", "Boot Game", Q_NULLPTR));
        bootInstallPkgAct->setText(QApplication::translate("main_window", "Install .pkg", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        bootInstallPkgAct->setToolTip(QApplication::translate("main_window", "Install application from pkg file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        bootInstallPupAct->setText(QApplication::translate("main_window", "Install .pup", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        bootInstallPupAct->setToolTip(QApplication::translate("main_window", "Install firmware from PS3UPDAT.PUP", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        sysPauseAct->setText(QApplication::translate("main_window", "Pause", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        sysPauseAct->setToolTip(QApplication::translate("main_window", "Start Emulation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        sysStopAct->setText(QApplication::translate("main_window", "Stop", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        sysStopAct->setToolTip(QApplication::translate("main_window", "Stop Emulation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        sysSendOpenMenuAct->setText(QApplication::translate("main_window", "Send Open System Menu CMD", Q_NULLPTR));
        sysSendExitAct->setText(QApplication::translate("main_window", "Send Exit CMD", Q_NULLPTR));
        confCPUAct->setText(QApplication::translate("main_window", "CPU", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        confCPUAct->setToolTip(QApplication::translate("main_window", "Configure CPU", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        confGPUAct->setText(QApplication::translate("main_window", "GPU", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        confGPUAct->setToolTip(QApplication::translate("main_window", "Configure Graphics", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        confPadAct->setText(QApplication::translate("main_window", "Controls", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        confPadAct->setToolTip(QApplication::translate("main_window", "Configure Controls", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        confAudioAct->setText(QApplication::translate("main_window", "Audio", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        confAudioAct->setToolTip(QApplication::translate("main_window", "Configure Audio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        confIOAct->setText(QApplication::translate("main_window", "Input/Output", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        confIOAct->setToolTip(QApplication::translate("main_window", "Configure Input/Output", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        confSystemAct->setText(QApplication::translate("main_window", "System", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        confSystemAct->setToolTip(QApplication::translate("main_window", "Configure System", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        confAutopauseManagerAct->setText(QApplication::translate("main_window", "Auto Pause", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        confAutopauseManagerAct->setToolTip(QApplication::translate("main_window", "Configure Auto Pause", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        exitAct->setText(QApplication::translate("main_window", "Exit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        exitAct->setToolTip(QApplication::translate("main_window", "Exit RPCS3", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        exitAct->setStatusTip(QApplication::translate("main_window", "Exit the application", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        confSavedataManagerAct->setText(QApplication::translate("main_window", "Save Data", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        confSavedataManagerAct->setToolTip(QApplication::translate("main_window", "Manage Save Data", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionManage_Trophy_Data->setText(QApplication::translate("main_window", "Trophies", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionManage_Trophy_Data->setToolTip(QApplication::translate("main_window", "Manage Trophies", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionManage_Users->setText(QApplication::translate("main_window", "User Accounts", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionManage_Users->setToolTip(QApplication::translate("main_window", "Manage User Accounts", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionManage_yml_Patches->setText(QApplication::translate("main_window", "Manage .yml Patches", Q_NULLPTR));
        toolsCgDisasmAct->setText(QApplication::translate("main_window", "Cg Disasm", Q_NULLPTR));
        toolskernel_explorerAct->setText(QApplication::translate("main_window", "Kernel Explorer", Q_NULLPTR));
        toolsmemory_viewerAct->setText(QApplication::translate("main_window", "Memory Viewer", Q_NULLPTR));
        toolsRsxDebuggerAct->setText(QApplication::translate("main_window", "RSX Debugger", Q_NULLPTR));
        toolsStringSearchAct->setText(QApplication::translate("main_window", "String Search", Q_NULLPTR));
        toolsDecryptSprxLibsAct->setText(QApplication::translate("main_window", "SPRX Decryption", Q_NULLPTR));
        showDebuggerAct->setText(QApplication::translate("main_window", "Show Debugger", Q_NULLPTR));
        showLogAct->setText(QApplication::translate("main_window", "Show Log/TTY", Q_NULLPTR));
        aboutAct->setText(QApplication::translate("main_window", "About RPCS3", Q_NULLPTR));
        aboutQtAct->setText(QApplication::translate("main_window", "About Qt", Q_NULLPTR));
        actionShow_Controls->setText(QApplication::translate("main_window", "Show Controls", Q_NULLPTR));
        showGameListAct->setText(QApplication::translate("main_window", "Show Game List", Q_NULLPTR));
        showToolBarAct->setText(QApplication::translate("main_window", "Show Tool Bar", Q_NULLPTR));
        refreshGameListAct->setText(QApplication::translate("main_window", "Game List Refresh", Q_NULLPTR));
        actionShow_Categories->setText(QApplication::translate("main_window", "Game List Categories", Q_NULLPTR));
        actionManage_RAP_Licences->setText(QApplication::translate("main_window", "RAP Files", Q_NULLPTR));
        actionCheck_for_Updates->setText(QApplication::translate("main_window", "Check for Updates", Q_NULLPTR));
        confVFSDialogAct->setText(QApplication::translate("main_window", "Virtual File System", Q_NULLPTR));
        clearRecentAct->setText(QApplication::translate("main_window", "List Clear", Q_NULLPTR));
        freezeRecentAct->setText(QApplication::translate("main_window", "List Freeze", Q_NULLPTR));
        setIconSizeTinyAct->setText(QApplication::translate("main_window", "Tiny", Q_NULLPTR));
        setIconSizeSmallAct->setText(QApplication::translate("main_window", "Small", Q_NULLPTR));
        setIconSizeMediumAct->setText(QApplication::translate("main_window", "Medium", Q_NULLPTR));
        setIconSizeLargeAct->setText(QApplication::translate("main_window", "Large", Q_NULLPTR));
        setlistModeListAct->setText(QApplication::translate("main_window", "List View", Q_NULLPTR));
        setlistModeGridAct->setText(QApplication::translate("main_window", "Grid View", Q_NULLPTR));
        sysRebootAct->setText(QApplication::translate("main_window", "Restart", Q_NULLPTR));
        actionPause->setText(QApplication::translate("main_window", "Pause", Q_NULLPTR));
        actionSave_State->setText(QApplication::translate("main_window", "Save State", Q_NULLPTR));
        showCatHDDGameAct->setText(QApplication::translate("main_window", "HDD Games", Q_NULLPTR));
        showCatDiscGameAct->setText(QApplication::translate("main_window", "Disc Games", Q_NULLPTR));
        showCatHomeAct->setText(QApplication::translate("main_window", "Home", Q_NULLPTR));
        showCatAudioVideoAct->setText(QApplication::translate("main_window", "Audio/Video", Q_NULLPTR));
        showCatGameDataAct->setText(QApplication::translate("main_window", "Game Data", Q_NULLPTR));
        showCatUnknownAct->setText(QApplication::translate("main_window", "Unknown", Q_NULLPTR));
        captureFrame->setText(QApplication::translate("main_window", "Capture Frame", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        captureFrame->setToolTip(QApplication::translate("main_window", "Capture frame", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolbar_start->setText(QApplication::translate("main_window", "start", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolbar_start->setToolTip(QApplication::translate("main_window", "Pause emulation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolbar_stop->setText(QApplication::translate("main_window", "stop", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolbar_stop->setToolTip(QApplication::translate("main_window", "Stop emulation", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolbar_config->setText(QApplication::translate("main_window", "config", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolbar_config->setToolTip(QApplication::translate("main_window", "Configuration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolbar_controls->setText(QApplication::translate("main_window", "controls", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolbar_controls->setToolTip(QApplication::translate("main_window", "Configure controls", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolbar_snap->setText(QApplication::translate("main_window", "snap", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolbar_snap->setToolTip(QApplication::translate("main_window", "Capture frame", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolbar_fullscreen->setText(QApplication::translate("main_window", "fullscreen", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolbar_fullscreen->setToolTip(QApplication::translate("main_window", "Toggle fullscreen", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolbar_list->setText(QApplication::translate("main_window", "list", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolbar_list->setToolTip(QApplication::translate("main_window", "Switch to list mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolbar_grid->setText(QApplication::translate("main_window", "grid", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolbar_grid->setToolTip(QApplication::translate("main_window", "Switch to grid mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolbar_sort->setText(QApplication::translate("main_window", "sort", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolbar_sort->setToolTip(QApplication::translate("main_window", "Sort options", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolbar_refresh->setText(QApplication::translate("main_window", "refresh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolbar_refresh->setToolTip(QApplication::translate("main_window", "Refresh gamelist", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolbar_disc->setText(QApplication::translate("main_window", "disc", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolbar_disc->setToolTip(QApplication::translate("main_window", "Boot game", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        showCatOtherAct->setText(QApplication::translate("main_window", "Other", Q_NULLPTR));
        showGameToolBarAct->setText(QApplication::translate("main_window", "Show Game Tool Bar", Q_NULLPTR));
        actionNetwork->setText(QApplication::translate("main_window", "Network", Q_NULLPTR));
        actionEmulator->setText(QApplication::translate("main_window", "Emulator", Q_NULLPTR));
        searchBar->setPlaceholderText(QApplication::translate("main_window", "Search...", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("main_window", "File", Q_NULLPTR));
        bootRecentMenu->setTitle(QApplication::translate("main_window", "Boot Recent", Q_NULLPTR));
        menuEmulation->setTitle(QApplication::translate("main_window", "Emulation", Q_NULLPTR));
        menuConfiguration->setTitle(QApplication::translate("main_window", "Configuration", Q_NULLPTR));
        menuManage->setTitle(QApplication::translate("main_window", "Manage", Q_NULLPTR));
        menuUtilities->setTitle(QApplication::translate("main_window", "Utilities", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("main_window", "View", Q_NULLPTR));
        menuGame_List_Icons->setTitle(QApplication::translate("main_window", "Game List Icons", Q_NULLPTR));
        menuGame_List_Mode->setTitle(QApplication::translate("main_window", "Game List Mode", Q_NULLPTR));
        menuGame_Categories->setTitle(QApplication::translate("main_window", "Game Categories", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("main_window", "Help", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("main_window", "Show tool bar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class main_window: public Ui_main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
