// generated by Fast Light User Interface Designer (fluid) version 1.0305

#ifndef infinity_gui_h
#define infinity_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Counter.H>

class InfinityGui : public Fl_Group {
public:
  InfinityGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *infinity_activar;
private:
  inline void cb_infinity_activar_i(Fl_Light_Button*, void*);
  static void cb_infinity_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *infinity_preset;
private:
  inline void cb_infinity_preset_i(Fl_Choice*, void*);
  static void cb_infinity_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_infinity_preset[];
public:
  SliderW *infinity_WD;
private:
  inline void cb_infinity_WD_i(SliderW*, void*);
  static void cb_infinity_WD(SliderW*, void*);
public:
  SliderW *infinity_Q;
private:
  inline void cb_infinity_Q_i(SliderW*, void*);
  static void cb_infinity_Q(SliderW*, void*);
public:
  Fl_Value_Input *infinity_1;
private:
  inline void cb_infinity_1_i(Fl_Value_Input*, void*);
  static void cb_infinity_1(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *infinity_2;
private:
  inline void cb_infinity_2_i(Fl_Value_Input*, void*);
  static void cb_infinity_2(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *infinity_3;
private:
  inline void cb_infinity_3_i(Fl_Value_Input*, void*);
  static void cb_infinity_3(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *infinity_4;
private:
  inline void cb_infinity_4_i(Fl_Value_Input*, void*);
  static void cb_infinity_4(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *infinity_5;
private:
  inline void cb_infinity_5_i(Fl_Value_Input*, void*);
  static void cb_infinity_5(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *infinity_6;
private:
  inline void cb_infinity_6_i(Fl_Value_Input*, void*);
  static void cb_infinity_6(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *infinity_7;
private:
  inline void cb_infinity_7_i(Fl_Value_Input*, void*);
  static void cb_infinity_7(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *infinity_8;
private:
  inline void cb_infinity_8_i(Fl_Value_Input*, void*);
  static void cb_infinity_8(Fl_Value_Input*, void*);
public:
  Fl_Check_Button *infinity_rev;
private:
  inline void cb_infinity_rev_i(Fl_Check_Button*, void*);
  static void cb_infinity_rev(Fl_Check_Button*, void*);
public:
  Fl_Counter *infinity_stages;
private:
  inline void cb_infinity_stages_i(Fl_Counter*, void*);
  static void cb_infinity_stages(Fl_Counter*, void*);
public:
  SliderW *infinity_pan;
private:
  inline void cb_infinity_pan_i(SliderW*, void*);
  static void cb_infinity_pan(SliderW*, void*);
public:
  SliderW *infinity_stdf;
private:
  inline void cb_infinity_stdf_i(SliderW*, void*);
  static void cb_infinity_stdf(SliderW*, void*);
public:
  SliderW *infinity_start;
private:
  inline void cb_infinity_start_i(SliderW*, void*);
  static void cb_infinity_start(SliderW*, void*);
public:
  SliderW *infinity_end;
private:
  inline void cb_infinity_end_i(SliderW*, void*);
  static void cb_infinity_end(SliderW*, void*);
public:
  SliderW *infinity_rate;
private:
  inline void cb_infinity_rate_i(SliderW*, void*);
  static void cb_infinity_rate(SliderW*, void*);
public:
  SliderW *infinity_subdiv;
private:
  inline void cb_infinity_subdiv_i(SliderW*, void*);
  static void cb_infinity_subdiv(SliderW*, void*);
};
#endif
