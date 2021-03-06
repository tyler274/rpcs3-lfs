#pragma once

// I just want the struct for the save data.
#include "stdafx.h"
#include "Emu/Memory/Memory.h"
#include "Emu/Cell/Modules/cellSaveData.h"

#include <QDialog>
#include <QHBoxLayout>
#include <QPushButton>
#include <QComboBox>
#include <QTableWidget>
#include <QLabel>
#include <QHeaderView>
#include <QMenu>

//Used to display the information of a savedata.
//Not sure about what information should be displayed.
class save_data_info_dialog :public QDialog
{
	Q_OBJECT

public:
	explicit save_data_info_dialog(const SaveDataEntry& save, QWidget* parent = nullptr);
private:
	void UpdateData();

	SaveDataEntry m_entry;
	QTableWidget* m_list;
};

//Display a list of SaveData. Would need to be initialized.
//Can also be used as a Save Data Chooser.
class save_data_list_dialog : public QDialog
{
	Q_OBJECT

public:
	explicit save_data_list_dialog(const std::vector<SaveDataEntry>& entries, s32 focusedEntry, bool is_saving, QWidget* parent = nullptr);

	s32 GetSelection();
private Q_SLOTS:
	void OnEntryCopy();
	void OnEntryRemove();
	void OnEntryInfo();
	void ShowContextMenu(const QPoint &pos);
private:
	void UpdateSelectionLabel(void);
	void LoadEntries(void);
	void UpdateList(void);
	void OnSort(int id);

	s32 m_selectedEntry;
	QLabel* selectedEntryLabel;

	QTableWidget* m_list;
	std::vector<SaveDataEntry> m_save_entries;

	QMenu* m_sort_options;

	const int m_sort_type_count = 3;
	int m_sortColumn;
	bool m_sortAscending;

	QAction* saveIDAct;
	QAction* titleAct;
	QAction* subtitleAct;
	QAction* copyAct;
	QAction* removeAct;
	QAction* infoAct;
};
