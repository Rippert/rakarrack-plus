// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef settingswindow_gui_h
#define settingswindow_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include "rakarrack.h"
#include <FL/Fl_Box.H>
#include <FL/Fl_Tabs.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Browser.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_File_Input.H>
#include <FL/Fl_Counter.H>
#include <FL/Fl_Scroll.H>
#include <FL/Fl_Input.H>

class SettingsWindowGui : public Fl_Double_Window {
  void _SettingsWindowGui();
public:
  SettingsWindowGui(int X, int Y, int W, int H, const char *L = 0);
  SettingsWindowGui(int W, int H, const char *L = 0);
  SettingsWindowGui();
  Fl_Box *Fondo2;
  Fl_Tabs *STabs;
  Fl_Group *Look;
  Fl_Box *Fondo6;
  Fl_Choice *scheme_ch;
private:
  inline void cb_scheme_ch_i(Fl_Choice*, void*);
  static void cb_scheme_ch(Fl_Choice*, void*);
  static Fl_Menu_Item menu_scheme_ch[];
public:
  Fl_Browser *Font_Bro;
private:
  inline void cb_Font_Bro_i(Fl_Browser*, void*);
  static void cb_Font_Bro(Fl_Browser*, void*);
public:
  Fl_Box *FSLabel;
  Fl_Button *FSless;
private:
  inline void cb_FSless_i(Fl_Button*, void*);
  static void cb_FSless(Fl_Button*, void*);
public:
  Fl_Button *FSplus;
private:
  inline void cb_FSplus_i(Fl_Button*, void*);
  static void cb_FSplus(Fl_Button*, void*);
public:
  Fl_Button *FSReset;
private:
  inline void cb_FSReset_i(Fl_Button*, void*);
  static void cb_FSReset(Fl_Button*, void*);
public:
  Fl_Box *CLLabel;
  Fl_Button *B_C;
private:
  inline void cb_B_C_i(Fl_Button*, void*);
  static void cb_B_C(Fl_Button*, void*);
public:
  Fl_Button *A_C;
private:
  inline void cb_A_C_i(Fl_Button*, void*);
  static void cb_A_C(Fl_Button*, void*);
public:
  Fl_Button *L_C;
private:
  inline void cb_L_C_i(Fl_Button*, void*);
  static void cb_L_C(Fl_Button*, void*);
public:
  Fl_Button *K_C;
private:
  inline void cb_K_C_i(Fl_Button*, void*);
  static void cb_K_C(Fl_Button*, void*);
public:
  Fl_Check_Button *Enable_Back;
private:
  inline void cb_Enable_Back_i(Fl_Check_Button*, void*);
  static void cb_Enable_Back(Fl_Check_Button*, void*);
public:
  Fl_File_Input *BackFiname;
  Fl_Button *BI_Browser;
private:
  inline void cb_BI_Browser_i(Fl_Button*, void*);
  static void cb_BI_Browser(Fl_Button*, void*);
public:
  Fl_Check_Button *Enable_DeacHide;
private:
  inline void cb_Enable_DeacHide_i(Fl_Check_Button*, void*);
  static void cb_Enable_DeacHide(Fl_Check_Button*, void*);
public:
  Fl_Group *AUDIO_SET;
  Fl_Box *Fondo7;
  Fl_Check_Button *INSTATE;
private:
  inline void cb_INSTATE_i(Fl_Check_Button*, void*);
  static void cb_INSTATE(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *Filter_DC;
private:
  inline void cb_Filter_DC_i(Fl_Check_Button*, void*);
  static void cb_Filter_DC(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *Pre_Serve;
private:
  inline void cb_Pre_Serve_i(Fl_Check_Button*, void*);
  static void cb_Pre_Serve(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *Update_TAP;
private:
  inline void cb_Update_TAP_i(Fl_Check_Button*, void*);
  static void cb_Update_TAP(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *UPSAMPLE_C;
private:
  inline void cb_UPSAMPLE_C_i(Fl_Check_Button*, void*);
  static void cb_UPSAMPLE_C(Fl_Check_Button*, void*);
public:
  Fl_Choice *Upr_Amo;
private:
  inline void cb_Upr_Amo_i(Fl_Choice*, void*);
  static void cb_Upr_Amo(Fl_Choice*, void*);
  static Fl_Menu_Item menu_Upr_Amo[];
public:
  Fl_Choice *Upr_Qual;
private:
  inline void cb_Upr_Qual_i(Fl_Choice*, void*);
  static void cb_Upr_Qual(Fl_Choice*, void*);
  static Fl_Menu_Item menu_Upr_Qual[];
public:
  Fl_Choice *Downr_Qual;
private:
  inline void cb_Downr_Qual_i(Fl_Choice*, void*);
  static void cb_Downr_Qual(Fl_Choice*, void*);
public:
  Fl_Counter *L_SIZE;
private:
  inline void cb_L_SIZE_i(Fl_Counter*, void*);
  static void cb_L_SIZE(Fl_Counter*, void*);
public:
  Fl_Counter *LM_Volume;
private:
  inline void cb_LM_Volume_i(Fl_Counter*, void*);
  static void cb_LM_Volume(Fl_Counter*, void*);
public:
  Fl_Choice *Har_Qual;
private:
  inline void cb_Har_Qual_i(Fl_Choice*, void*);
  static void cb_Har_Qual(Fl_Choice*, void*);
  static Fl_Menu_Item menu_Har_Qual[];
public:
  Fl_Choice *Ste_Qual;
private:
  inline void cb_Ste_Qual_i(Fl_Choice*, void*);
  static void cb_Ste_Qual(Fl_Choice*, void*);
  static Fl_Menu_Item menu_Ste_Qual[];
public:
  Fl_Choice *Voc_Bands;
private:
  inline void cb_Voc_Bands_i(Fl_Choice*, void*);
  static void cb_Voc_Bands(Fl_Choice*, void*);
  static Fl_Menu_Item menu_Voc_Bands[];
public:
  Fl_Check_Button *FLPosition;
private:
  inline void cb_FLPosition_i(Fl_Check_Button*, void*);
  static void cb_FLPosition(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *DB6B;
private:
  inline void cb_DB6B_i(Fl_Check_Button*, void*);
  static void cb_DB6B(Fl_Check_Button*, void*);
public:
  Fl_Counter *Calibration;
private:
  inline void cb_Calibration_i(Fl_Counter*, void*);
  static void cb_Calibration(Fl_Counter*, void*);
public:
  Fl_Counter *RTrigger;
private:
  inline void cb_RTrigger_i(Fl_Counter*, void*);
  static void cb_RTrigger(Fl_Counter*, void*);
public:
  Fl_Choice *RC_Harm_Opti;
private:
  inline void cb_RC_Harm_Opti_i(Fl_Choice*, void*);
  static void cb_RC_Harm_Opti(Fl_Choice*, void*);
  static Fl_Menu_Item menu_RC_Harm_Opti[];
public:
  Fl_Choice *RC_St_Harm_Opti;
private:
  inline void cb_RC_St_Harm_Opti_i(Fl_Choice*, void*);
  static void cb_RC_St_Harm_Opti(Fl_Choice*, void*);
  static Fl_Menu_Item menu_RC_St_Harm_Opti[];
public:
  Fl_Choice *RC_Ring_Opti;
private:
  inline void cb_RC_Ring_Opti_i(Fl_Choice*, void*);
  static void cb_RC_Ring_Opti(Fl_Choice*, void*);
  static Fl_Menu_Item menu_RC_Ring_Opti[];
public:
  Fl_Choice *Har_Downsample;
private:
  inline void cb_Har_Downsample_i(Fl_Choice*, void*);
  static void cb_Har_Downsample(Fl_Choice*, void*);
  static Fl_Menu_Item menu_Har_Downsample[];
public:
  Fl_Choice *Har_Down_Qua;
private:
  inline void cb_Har_Down_Qua_i(Fl_Choice*, void*);
  static void cb_Har_Down_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Har_Up_Qua;
private:
  inline void cb_Har_Up_Qua_i(Fl_Choice*, void*);
  static void cb_Har_Up_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Rev_Downsample;
private:
  inline void cb_Rev_Downsample_i(Fl_Choice*, void*);
  static void cb_Rev_Downsample(Fl_Choice*, void*);
public:
  Fl_Choice *Rev_Down_Qua;
private:
  inline void cb_Rev_Down_Qua_i(Fl_Choice*, void*);
  static void cb_Rev_Down_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Rev_Up_Qua;
private:
  inline void cb_Rev_Up_Qua_i(Fl_Choice*, void*);
  static void cb_Rev_Up_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Con_Downsample;
private:
  inline void cb_Con_Downsample_i(Fl_Choice*, void*);
  static void cb_Con_Downsample(Fl_Choice*, void*);
public:
  Fl_Choice *Con_Down_Qua;
private:
  inline void cb_Con_Down_Qua_i(Fl_Choice*, void*);
  static void cb_Con_Down_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Con_Up_Qua;
private:
  inline void cb_Con_Up_Qua_i(Fl_Choice*, void*);
  static void cb_Con_Up_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Seq_Downsample;
private:
  inline void cb_Seq_Downsample_i(Fl_Choice*, void*);
  static void cb_Seq_Downsample(Fl_Choice*, void*);
public:
  Fl_Choice *Seq_Down_Qua;
private:
  inline void cb_Seq_Down_Qua_i(Fl_Choice*, void*);
  static void cb_Seq_Down_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Seq_Up_Qua;
private:
  inline void cb_Seq_Up_Qua_i(Fl_Choice*, void*);
  static void cb_Seq_Up_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Shi_Downsample;
private:
  inline void cb_Shi_Downsample_i(Fl_Choice*, void*);
  static void cb_Shi_Downsample(Fl_Choice*, void*);
public:
  Fl_Choice *Shi_Down_Qua;
private:
  inline void cb_Shi_Down_Qua_i(Fl_Choice*, void*);
  static void cb_Shi_Down_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Shi_Up_Qua;
private:
  inline void cb_Shi_Up_Qua_i(Fl_Choice*, void*);
  static void cb_Shi_Up_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Voc_Downsample;
private:
  inline void cb_Voc_Downsample_i(Fl_Choice*, void*);
  static void cb_Voc_Downsample(Fl_Choice*, void*);
public:
  Fl_Choice *Voc_Down_Qua;
private:
  inline void cb_Voc_Down_Qua_i(Fl_Choice*, void*);
  static void cb_Voc_Down_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Voc_Up_Qua;
private:
  inline void cb_Voc_Up_Qua_i(Fl_Choice*, void*);
  static void cb_Voc_Up_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Ste_Downsample;
private:
  inline void cb_Ste_Downsample_i(Fl_Choice*, void*);
  static void cb_Ste_Downsample(Fl_Choice*, void*);
public:
  Fl_Choice *Ste_Down_Qua;
private:
  inline void cb_Ste_Down_Qua_i(Fl_Choice*, void*);
  static void cb_Ste_Down_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Ste_Up_Qua;
private:
  inline void cb_Ste_Up_Qua_i(Fl_Choice*, void*);
  static void cb_Ste_Up_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Wave_Amo;
private:
  inline void cb_Wave_Amo_i(Fl_Choice*, void*);
  static void cb_Wave_Amo(Fl_Choice*, void*);
  static Fl_Menu_Item menu_Wave_Amo[];
public:
  Fl_Choice *Wave_Down_Qua;
private:
  inline void cb_Wave_Down_Qua_i(Fl_Choice*, void*);
  static void cb_Wave_Down_Qua(Fl_Choice*, void*);
public:
  Fl_Choice *Wave_Up_Qua;
private:
  inline void cb_Wave_Up_Qua_i(Fl_Choice*, void*);
  static void cb_Wave_Up_Qua(Fl_Choice*, void*);
public:
  Fl_Box *Recognize_Label;
  Fl_Group *MIDI_SET;
  Fl_Box *Fondo8;
  Fl_Check_Button *D_A_Connect;
private:
  inline void cb_D_A_Connect_i(Fl_Check_Button*, void*);
  static void cb_D_A_Connect(Fl_Check_Button*, void*);
public:
  Fl_Browser *BMidiIn;
private:
  inline void cb_BMidiIn_i(Fl_Browser*, void*);
  static void cb_BMidiIn(Fl_Browser*, void*);
public:
  Fl_Counter *Midi_In_Counter;
private:
  inline void cb_Midi_In_Counter_i(Fl_Counter*, void*);
  static void cb_Midi_In_Counter(Fl_Counter*, void*);
public:
  Fl_Counter *Har_In_Counter;
private:
  inline void cb_Har_In_Counter_i(Fl_Counter*, void*);
  static void cb_Har_In_Counter(Fl_Counter*, void*);
public:
  Fl_Counter *Stereo_Har_In_Counter;
private:
  inline void cb_Stereo_Har_In_Counter_i(Fl_Counter*, void*);
  static void cb_Stereo_Har_In_Counter(Fl_Counter*, void*);
public:
  Fl_Group *wMIDI;
  Fl_Check_Button *Mw0;
private:
  inline void cb_Mw0_i(Fl_Check_Button*, void*);
  static void cb_Mw0(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *Mw1;
private:
  inline void cb_Mw1_i(Fl_Check_Button*, void*);
  static void cb_Mw1(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *AAssign;
private:
  inline void cb_AAssign_i(Fl_Check_Button*, void*);
  static void cb_AAssign(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *MTable;
private:
  inline void cb_MTable_i(Fl_Check_Button*, void*);
  static void cb_MTable(Fl_Check_Button*, void*);
public:
  Fl_Scroll *scroll;
  Fl_Group *JACK_SET;
  Fl_Box *Fondo9;
  Fl_Check_Button *D_J_Connect;
private:
  inline void cb_D_J_Connect_i(Fl_Check_Button*, void*);
  static void cb_D_J_Connect(Fl_Check_Button*, void*);
public:
  Fl_Browser *JackCo;
  Fl_Check_Button *D_IJ_Connect;
private:
  inline void cb_D_IJ_Connect_i(Fl_Check_Button*, void*);
  static void cb_D_IJ_Connect(Fl_Check_Button*, void*);
public:
  Fl_Browser *JackIn;
  Fl_Group *MISC_SET;
  Fl_Box *Fondo10;
  Fl_Input *Username;
private:
  inline void cb_Username_i(Fl_Input*, void*);
  static void cb_Username(Fl_Input*, void*);
public:
  Fl_Check_Button *MES_DIS;
private:
  inline void cb_MES_DIS_i(Fl_Check_Button*, void*);
  static void cb_MES_DIS(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *T_TIMEOUT;
private:
  inline void cb_T_TIMEOUT_i(Fl_Check_Button*, void*);
  static void cb_T_TIMEOUT(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *ENA_TOOL;
private:
  inline void cb_ENA_TOOL_i(Fl_Check_Button*, void*);
  static void cb_ENA_TOOL(Fl_Check_Button*, void*);
public:
  Fl_Group *BANK_SET;
  Fl_Box *Fondo11;
  Fl_File_Input *BFiname;
  Fl_Button *BF_Browser;
private:
  inline void cb_BF_Browser_i(Fl_Button*, void*);
  static void cb_BF_Browser(Fl_Button*, void*);
public:
  Fl_File_Input *Udir;
  Fl_Button *UD_Browser;
private:
  inline void cb_UD_Browser_i(Fl_Button*, void*);
  static void cb_UD_Browser(Fl_Button*, void*);
  RKR* m_rkr; 
  RKRGUI* m_rgui; 
public:
  void initialize(RKR *_rkr,RKRGUI *_rgui );
  Fl_Menu_Item * get_menu_Har_Downsample();
};
#endif
