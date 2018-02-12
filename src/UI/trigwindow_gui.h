// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef trigwindow_gui_h
#define trigwindow_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include "rakarrack.h"
#include <FL/Fl_Box.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Value_Input.H>

class TrigWindowGui : public Fl_Double_Window {
  void _TrigWindowGui();
public:
  TrigWindowGui(int X, int Y, int W, int H, const char *L = 0);
  TrigWindowGui(int W, int H, const char *L = 0);
  TrigWindowGui();
  Fl_Box *Fondo5;
  Fl_Box *ACI_LABEL;
  NewVum *aux_vu;
  Fl_Choice *aux_source;
private:
  inline void cb_aux_source_i(Fl_Choice*, void*);
  static void cb_aux_source(Fl_Choice*, void*);
  static Fl_Menu_Item menu_aux_source[];
public:
  SliderW *aux_gain;
private:
  inline void cb_aux_gain_i(SliderW*, void*);
  static void cb_aux_gain(SliderW*, void*);
public:
  SliderW *aux_thres;
private:
  inline void cb_aux_thres_i(SliderW*, void*);
  static void cb_aux_thres(SliderW*, void*);
public:
  Fl_Value_Input *aux_midi;
private:
  inline void cb_aux_midi_i(Fl_Value_Input*, void*);
  static void cb_aux_midi(Fl_Value_Input*, void*);
public:
  SliderW *aux_min;
private:
  inline void cb_aux_min_i(SliderW*, void*);
  static void cb_aux_min(SliderW*, void*);
public:
  SliderW *aux_max;
private:
  inline void cb_aux_max_i(SliderW*, void*);
  static void cb_aux_max(SliderW*, void*);
  RKR* m_rkr; 
public:
  void initialize(RKR *_rkr);
};
#endif