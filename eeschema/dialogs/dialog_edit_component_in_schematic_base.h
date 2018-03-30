///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 30 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __DIALOG_EDIT_COMPONENT_IN_SCHEMATIC_BASE_H__
#define __DIALOG_EDIT_COMPONENT_IN_SCHEMATIC_BASE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include "dialog_shim.h"
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/radiobox.h>
#include <wx/checkbox.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/statbox.h>
#include <wx/statline.h>
#include <wx/listctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/bmpbuttn.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_EDIT_COMPONENT_IN_SCHEMATIC_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_EDIT_COMPONENT_IN_SCHEMATIC_BASE : public DIALOG_SHIM
{
	private:
	
	protected:
		wxStaticText* m_staticTextUnit;
		wxChoice* unitChoice;
		wxStaticText* unitsInterchageableText;
		wxStaticText* unitsInterchageableLabel;
		wxRadioBox* orientationRadioBox;
		wxRadioBox* mirrorRadioBox;
		wxCheckBox* convertCheckBox;
		wxTextCtrl* chipnameTextCtrl;
		wxButton* m_buttonTestChipName;
		wxButton* m_buttonSelectChipName;
		wxStaticText* m_staticTextTimeStamp;
		wxTextCtrl* m_textCtrlTimeStamp;
		wxStaticLine* m_staticline1;
		wxButton* spiceFieldsButton;
		wxButton* resetFieldsStyleButton;
		wxButton* updateFieldValues;
		wxListCtrl* fieldListCtrl;
		wxBitmapButton* moveUpButton;
		wxBitmapButton* moveDownButton;
		wxBitmapButton* deleteFieldButton;
		wxBitmapButton* addFieldButton;
		wxRadioBox* m_FieldHJustifyCtrl;
		wxRadioBox* m_FieldVJustifyCtrl;
		wxCheckBox* showCheckBox;
		wxCheckBox* rotateCheckBox;
		wxRadioBox* m_StyleRadioBox;
		wxStaticText* fieldNameLabel;
		wxTextCtrl* fieldNameTextCtrl;
		wxStaticText* fieldValueLabel;
		wxTextCtrl* fieldValueTextCtrl;
		wxButton* m_show_datasheet_button;
		wxStaticText* textSizeLabel;
		wxTextCtrl* textSizeTextCtrl;
		wxStaticText* m_staticTextUnitSize;
		wxStaticText* posXLabel;
		wxTextCtrl* posXTextCtrl;
		wxStaticText* m_staticTextUnitPosX;
		wxStaticText* posYLabel;
		wxTextCtrl* posYTextCtrl;
		wxStaticText* m_staticTextUnitPosY;
		wxStdDialogButtonSizer* stdDialogButtonSizer;
		wxButton* stdDialogButtonSizerOK;
		wxButton* stdDialogButtonSizerCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnCloseDialog( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnInitDlg( wxInitDialogEvent& event ) { event.Skip(); }
		virtual void OnTestChipName( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSelectChipName( wxCommandEvent& event ) { event.Skip(); }
		virtual void EditSpiceModel( wxCommandEvent& event ) { event.Skip(); }
		virtual void SetInitCmp( wxCommandEvent& event ) { event.Skip(); }
		virtual void UpdateFields( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnListItemDeselected( wxListEvent& event ) { event.Skip(); }
		virtual void OnListItemSelected( wxListEvent& event ) { event.Skip(); }
		virtual void OnSizeFieldsList( wxSizeEvent& event ) { event.Skip(); }
		virtual void moveUpButtonHandler( wxCommandEvent& event ) { event.Skip(); }
		virtual void moveDownButtonHandler( wxCommandEvent& event ) { event.Skip(); }
		virtual void deleteFieldButtonHandler( wxCommandEvent& event ) { event.Skip(); }
		virtual void addFieldButtonHandler( wxCommandEvent& event ) { event.Skip(); }
		virtual void showButtonHandler( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCancelButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOKButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DIALOG_EDIT_COMPONENT_IN_SCHEMATIC_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Symbol Properties"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU ); 
		~DIALOG_EDIT_COMPONENT_IN_SCHEMATIC_BASE();
	
};

#endif //__DIALOG_EDIT_COMPONENT_IN_SCHEMATIC_BASE_H__