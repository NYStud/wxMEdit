///////////////////////////////////////////////////////////////////////////////
// Name:        wxm_word_count_dialog.cpp
// Description: WordCount Dialog
// Author:      wxmedit@gmail.com
// Licence:     GPL
///////////////////////////////////////////////////////////////////////////////

#include "wxm_word_count_dialog.h"

#include "wxmedit/wxmedit.h"

//(*InternalHeaders(WXMWordCountDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

#ifdef _DEBUG
#include <crtdbg.h>
#define new new(_NORMAL_BLOCK ,__FILE__, __LINE__)
#endif

//(*IdInit(WXMWordCountDialog)
const long WXMWordCountDialog::ID_STATICTEXT1 = wxNewId();
const long WXMWordCountDialog::ID_WXSTATICTEXTWORDCOUNT = wxNewId();
const long WXMWordCountDialog::ID_STATICTEXT2 = wxNewId();
const long WXMWordCountDialog::ID_WXSTATICTEXTCHARCOUNTNOSPNOCTRL = wxNewId();
const long WXMWordCountDialog::ID_STATICTEXT3 = wxNewId();
const long WXMWordCountDialog::ID_WXSTATICTEXTCHARCOUNTALL = wxNewId();
const long WXMWordCountDialog::ID_STATICTEXT4 = wxNewId();
const long WXMWordCountDialog::ID_WXSTATICTEXTCONTROLCOUNT = wxNewId();
const long WXMWordCountDialog::ID_STATICTEXT5 = wxNewId();
const long WXMWordCountDialog::ID_WXSTATICTEXTFULLWIDTHCOUNT = wxNewId();
const long WXMWordCountDialog::ID_STATICTEXT6 = wxNewId();
const long WXMWordCountDialog::ID_WXSTATICTEXTLINECOUNT = wxNewId();
const long WXMWordCountDialog::ID_STATICLINE1 = wxNewId();
const long WXMWordCountDialog::ID_STATICTEXT7 = wxNewId();
const long WXMWordCountDialog::ID_WXMEMO1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(WXMWordCountDialog,wxDialog)
	//(*EventTable(WXMWordCountDialog)
	//*)
END_EVENT_TABLE()

WXMWordCountDialog::WXMWordCountDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(WXMWordCountDialog)
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, wxID_ANY, _("Word Count"), wxDefaultPosition, wxDefaultSize, wxCAPTION|wxSYSTEM_MENU|wxRESIZE_BORDER|wxCLOSE_BOX|wxDIALOG_NO_PARENT|wxMAXIMIZE_BOX, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 150);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Words"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	WxStaticTextWordCount = new wxStaticText(this, ID_WXSTATICTEXTWORDCOUNT, _("999999"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_WXSTATICTEXTWORDCOUNT"));
	FlexGridSizer1->Add(WxStaticTextWordCount, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Characters (no controls/spaces)"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer1->Add(StaticText2, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	WxStaticTextCharCountNoSPNoCtrl = new wxStaticText(this, ID_WXSTATICTEXTCHARCOUNTNOSPNOCTRL, _("999999"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_WXSTATICTEXTCHARCOUNTNOSPNOCTRL"));
	FlexGridSizer1->Add(WxStaticTextCharCountNoSPNoCtrl, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Characters (all)"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer1->Add(StaticText3, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	WxStaticTextCharCountAll = new wxStaticText(this, ID_WXSTATICTEXTCHARCOUNTALL, _("999999"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_WXSTATICTEXTCHARCOUNTALL"));
	FlexGridSizer1->Add(WxStaticTextCharCountAll, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Control Characters"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer1->Add(StaticText4, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	WxStaticTextControlCount = new wxStaticText(this, ID_WXSTATICTEXTCONTROLCOUNT, _("999999"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_WXSTATICTEXTCONTROLCOUNT"));
	FlexGridSizer1->Add(WxStaticTextControlCount, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Fullwidth Characters"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer1->Add(StaticText5, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	WxStaticTextFullwidthCount = new wxStaticText(this, ID_WXSTATICTEXTFULLWIDTHCOUNT, _("999999"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_WXSTATICTEXTFULLWIDTHCOUNT"));
	FlexGridSizer1->Add(WxStaticTextFullwidthCount, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Lines"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer1->Add(StaticText6, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	WxStaticTextLineCount = new wxStaticText(this, ID_WXSTATICTEXTLINECOUNT, _("999999"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_WXSTATICTEXTLINECOUNT"));
	FlexGridSizer1->Add(WxStaticTextLineCount, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(FlexGridSizer1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	BoxSizer1->Add(StaticLine1, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Detail Information of Characters:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	BoxSizer1->Add(StaticText7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
	WxMemo1 = new wxTextCtrl(this, ID_WXMEMO1, wxEmptyString, wxDefaultPosition, wxSize(440,160), wxTE_MULTILINE|wxTE_DONTWRAP, wxDefaultValidator, _T("ID_WXMEMO1"));
	BoxSizer1->Add(WxMemo1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
	Button1 = new wxButton(this, wxID_CANCEL, _("&Close"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_CANCEL"));
	Button1->SetFocus();
	BoxSizer1->Add(Button1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&WXMWordCountDialog::WXMWordCountDialogClose);
	//*)

	extern MadEdit *g_ActiveMadEdit;
	int words, chars, spaces, lines, controls, fullwidths;
	wxArrayString detail;
	g_ActiveMadEdit->WordCount(g_ActiveMadEdit->IsSelected(), words, chars, spaces, controls, fullwidths, lines, &detail);

	if(g_ActiveMadEdit->IsSelected())
	{
		this->SetTitle(_("Word Count (Selected Text)"));
	}

	WxStaticTextWordCount->SetLabel(wxString()<<words);
	WxStaticTextCharCountNoSPNoCtrl->SetLabel(wxString()<<chars-spaces-controls);
	WxStaticTextCharCountAll->SetLabel(wxString()<<(chars));
	WxStaticTextControlCount->SetLabel(wxString()<<controls);
	WxStaticTextFullwidthCount->SetLabel(wxString()<<fullwidths);
	WxStaticTextLineCount->SetLabel(wxString()<<lines);
	wxString str;
	for(size_t i=0;i<detail.Count();i++)
	{
		str<<detail[i]<<wxT("\n");
	}
	WxMemo1->SetValue(str);
}

WXMWordCountDialog::~WXMWordCountDialog()
{
	//(*Destroy(WXMWordCountDialog)
	//*)
}


void WXMWordCountDialog::WXMWordCountDialogClose(wxCloseEvent& event)
{
	Destroy();
}
