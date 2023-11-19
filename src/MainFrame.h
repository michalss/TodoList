#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);

private:
	void CreateControls();
	void BindEventHandlers();
	void OnAddButtonClicked(wxCommandEvent& evt);
	void AddTaskFromInput();
	void OnInputEnter(wxCommandEvent& evt);
	void OnListKeyDown(wxKeyEvent& evt);
	void DeleteSelectedTask();
	void OnWindowClose(wxCloseEvent& evt);
	void MoveSelectedTask(int offset);
	void SwapTasks(int i, int j);
	void AddSavedTask();
	void OnClearButtonClicked(wxCommandEvent& evt);

	wxPanel* panel;
	wxStaticText* headLineText;
	wxTextCtrl* inputField;
	wxButton* addButton;
	wxCheckListBox* checkListBox;
	wxButton* clearButton;
};