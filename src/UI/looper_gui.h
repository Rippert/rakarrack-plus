// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef looper_gui_h
#define looper_gui_h
#include <FL/Fl.H>
#include "RKR_Light_Button.h"
#include "RKR_Box.h"
#include "RKR_Check_Button.h"
#include "RKR_Choice.h"
#include "RKR_GUI_Effect.h"
#include "RKR_Slider.h"
#include "../process.h"
#include "rakarrack.h"

class LooperGui : public RKR_Gui_Effect {
public:
  LooperGui(int X, int Y, int W, int H, const char *L = 0);
  RKR_Light_Button *looper_activar;
private:
  inline void cb_looper_activar_i(RKR_Light_Button*, void*);
  static void cb_looper_activar(RKR_Light_Button*, void*);
public:
  RKR_Choice *looper_preset;
private:
  inline void cb_looper_preset_i(RKR_Choice*, void*);
  static void cb_looper_preset(RKR_Choice*, void*);
  static Fl_Menu_Item menu_looper_preset[];
public:
  RKR_Slider *looper_WD;
private:
  inline void cb_looper_WD_i(RKR_Slider*, void*);
  static void cb_looper_WD(RKR_Slider*, void*);
public:
  RKR_Slider *looper_level1;
private:
  inline void cb_looper_level1_i(RKR_Slider*, void*);
  static void cb_looper_level1(RKR_Slider*, void*);
public:
  RKR_Slider *looper_level2;
private:
  inline void cb_looper_level2_i(RKR_Slider*, void*);
  static void cb_looper_level2(RKR_Slider*, void*);
public:
  RKR_Slider *looper_Tempo;
private:
  inline void cb_looper_Tempo_i(RKR_Slider*, void*);
  static void cb_looper_Tempo(RKR_Slider*, void*);
public:
  RKR_Choice *looper_bar;
private:
  inline void cb_looper_bar_i(RKR_Choice*, void*);
  static void cb_looper_bar(RKR_Choice*, void*);
public:
  RKR_Choice *looper_ms;
private:
  inline void cb_looper_ms_i(RKR_Choice*, void*);
  static void cb_looper_ms(RKR_Choice*, void*);
public:
  RKR_Check_Button *looper_rv;
private:
  inline void cb_looper_rv_i(RKR_Check_Button*, void*);
  static void cb_looper_rv(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *looper_ap;
private:
  inline void cb_looper_ap_i(RKR_Check_Button*, void*);
  static void cb_looper_ap(RKR_Check_Button*, void*);
public:
  RKR_Box *Box_Play;
  RKR_Box *Box_P;
  RKR_Button *looper_play;
private:
  inline void cb_looper_play_i(RKR_Button*, void*);
  static void cb_looper_play(RKR_Button*, void*);
public:
  RKR_Button *looper_stop;
private:
  inline void cb_looper_stop_i(RKR_Button*, void*);
  static void cb_looper_stop(RKR_Button*, void*);
public:
  RKR_Button *looper_record;
private:
  inline void cb_looper_record_i(RKR_Button*, void*);
  static void cb_looper_record(RKR_Button*, void*);
public:
  RKR_Check_Button *looper_r1;
private:
  inline void cb_looper_r1_i(RKR_Check_Button*, void*);
  static void cb_looper_r1(RKR_Check_Button*, void*);
public:
  RKR_Check_Button *looper_r2;
private:
  inline void cb_looper_r2_i(RKR_Check_Button*, void*);
  static void cb_looper_r2(RKR_Check_Button*, void*);
public:
  RKR_Button *looper_t1;
private:
  inline void cb_looper_t1_i(RKR_Button*, void*);
  static void cb_looper_t1(RKR_Button*, void*);
public:
  RKR_Button *looper_t2;
private:
  inline void cb_looper_t2_i(RKR_Button*, void*);
  static void cb_looper_t2(RKR_Button*, void*);
public:
  RKR_Check_Button *looper_lnk;
private:
  inline void cb_looper_lnk_i(RKR_Check_Button*, void*);
  static void cb_looper_lnk(RKR_Check_Button*, void*);
public:
  RKR_Button *looper_clear;
private:
  inline void cb_looper_clear_i(RKR_Button*, void*);
  static void cb_looper_clear(RKR_Button*, void*);
public:
  RKR_Check_Button *looper_mt;
private:
  inline void cb_looper_mt_i(RKR_Check_Button*, void*);
  static void cb_looper_mt(RKR_Check_Button*, void*);
public:
  RKR_Box *L_TimePos;
private:
  CommonGuiMenu *m_looper_bar; 
  CommonGuiMenu *m_looper_ms; 
public:
  void parameter_refresh(int index);
  void tap_tempo_update();
};
#endif
