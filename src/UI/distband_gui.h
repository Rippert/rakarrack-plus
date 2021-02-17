// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef distband_gui_h
#define distband_gui_h
#include <FL/Fl.H>
#include "RKR_Light_Button.h"
#include "RKR_Check_Button.h"
#include "RKR_Choice.h"
#include "RKR_GUI_Effect.h"
#include "RKR_Slider.h"
#include "../process.h"
#include "rakarrack.h"
#include "common_gui_menu.h"

class DistBandGui : public RKR_Gui_Effect {
public:
  DistBandGui(int X, int Y, int W, int H, const char *L = 0);
  RKR_Light_Button *distband_activar;
private:
  inline void cb_distband_activar_i(RKR_Light_Button*, void*);
  static void cb_distband_activar(RKR_Light_Button*, void*);
public:
  RKR_Choice *distband_preset;
private:
  inline void cb_distband_preset_i(RKR_Choice*, void*);
  static void cb_distband_preset(RKR_Choice*, void*);
  static Fl_Menu_Item menu_distband_preset[];
public:
  RKR_Slider *distband_WD;
private:
  inline void cb_distband_WD_i(RKR_Slider*, void*);
  static void cb_distband_WD(RKR_Slider*, void*);
public:
  RKR_Slider *distband_LRc;
private:
  inline void cb_distband_LRc_i(RKR_Slider*, void*);
  static void cb_distband_LRc(RKR_Slider*, void*);
public:
  RKR_Slider *distband_drive;
private:
  inline void cb_distband_drive_i(RKR_Slider*, void*);
  static void cb_distband_drive(RKR_Slider*, void*);
public:
  RKR_Slider *distband_level;
private:
  inline void cb_distband_level_i(RKR_Slider*, void*);
  static void cb_distband_level(RKR_Slider*, void*);
public:
  RKR_Slider *distband_volL;
private:
  inline void cb_distband_volL_i(RKR_Slider*, void*);
  static void cb_distband_volL(RKR_Slider*, void*);
public:
  RKR_Slider *distband_volM;
private:
  inline void cb_distband_volM_i(RKR_Slider*, void*);
  static void cb_distband_volM(RKR_Slider*, void*);
public:
  RKR_Slider *distband_volH;
private:
  inline void cb_distband_volH_i(RKR_Slider*, void*);
  static void cb_distband_volH(RKR_Slider*, void*);
public:
  RKR_Slider *distband_cross1;
private:
  inline void cb_distband_cross1_i(RKR_Slider*, void*);
  static void cb_distband_cross1(RKR_Slider*, void*);
public:
  RKR_Slider *distband_cross2;
private:
  inline void cb_distband_cross2_i(RKR_Slider*, void*);
  static void cb_distband_cross2(RKR_Slider*, void*);
public:
  RKR_Choice *distband_tipoL;
private:
  inline void cb_distband_tipoL_i(RKR_Choice*, void*);
  static void cb_distband_tipoL(RKR_Choice*, void*);
public:
  RKR_Choice *distband_tipoM;
private:
  inline void cb_distband_tipoM_i(RKR_Choice*, void*);
  static void cb_distband_tipoM(RKR_Choice*, void*);
public:
  RKR_Choice *distband_tipoH;
private:
  inline void cb_distband_tipoH_i(RKR_Choice*, void*);
  static void cb_distband_tipoH(RKR_Choice*, void*);
public:
  RKR_Slider *distband_pan;
private:
  inline void cb_distband_pan_i(RKR_Slider*, void*);
  static void cb_distband_pan(RKR_Slider*, void*);
public:
  RKR_Check_Button *distband_st;
private:
  inline void cb_distband_st_i(RKR_Check_Button*, void*);
  static void cb_distband_st(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *distband_neg;
private:
  inline void cb_distband_neg_i(RKR_Check_Button*, void*);
  static void cb_distband_neg(RKR_Check_Button*, void*);
  CommonGuiMenu *m_dist_menu; 
public:
  void parameter_refresh(int index);
};
#endif
