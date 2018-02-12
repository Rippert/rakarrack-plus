// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "midiconv_gui.h"

void MidiGui::cb_midi_activar_i(Fl_Light_Button* o, void*) {
  if ((int)o->value()==0)
  { 
    m_rkr->efx_MIDIConverter->panic();
    Mled->color(fl_darker(FL_RED));
    Mled->redraw();
  }


  m_rkr->MIDIConverter_Bypass=(int)o->value();
  Midi_out_Counter->do_callback();

  if(m_rgui != NULL)
    m_rgui->ChangeActives();

  MIDI_LABEL->redraw_label();
}
void MidiGui::cb_midi_activar(Fl_Light_Button* o, void* v) {
  ((MidiGui*)(o->parent()))->cb_midi_activar_i(o,v);
}

void MidiGui::cb_MIDIOctave_i(Fl_Choice* o, void*) {
  switch((int)o->value())
{
  case 0:
  m_rkr->efx_MIDIConverter->changepar(4,-2);
  break;
  
  case 1:
  m_rkr->efx_MIDIConverter->changepar(4,-1);
  break;

  case 2:
  m_rkr->efx_MIDIConverter->changepar(4,0);
  break;

  case 3:
  m_rkr->efx_MIDIConverter->changepar(4,1);

  break;

  case 4:
  m_rkr->efx_MIDIConverter->changepar(4,2);
  break;

};
}
void MidiGui::cb_MIDIOctave(Fl_Choice* o, void* v) {
  ((MidiGui*)(o->parent()))->cb_MIDIOctave_i(o,v);
}

Fl_Menu_Item MidiGui::menu_MIDIOctave[] = {
 {"-2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"-1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"0", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {0,0,0,0,0,0,0,0,0}
};

void MidiGui::cb_Midi_out_Counter_i(Fl_Counter* o, void*) {
  m_rkr->efx_MIDIConverter->changepar(3, (int)o->value());
}
void MidiGui::cb_Midi_out_Counter(Fl_Counter* o, void* v) {
  ((MidiGui*)(o->parent()))->cb_Midi_out_Counter_i(o,v);
}

void MidiGui::cb_Use_FFT_i(Fl_Check_Button* o, void*) {
  m_rkr->efx_MIDIConverter->changepar(5, (int)o->value());
}
void MidiGui::cb_Use_FFT(Fl_Check_Button* o, void* v) {
  ((MidiGui*)(o->parent()))->cb_Use_FFT_i(o,v);
}

void MidiGui::cb_Trig_Adj_i(SliderW* o, void*) {
  m_rkr->efx_MIDIConverter->changepar(1,(int)o->value());
}
void MidiGui::cb_Trig_Adj(SliderW* o, void* v) {
  ((MidiGui*)(o->parent()))->cb_Trig_Adj_i(o,v);
}

void MidiGui::cb_Vel_Adj_i(SliderW* o, void*) {
  m_rkr->efx_MIDIConverter->changepar(2,(int)o->value());
}
void MidiGui::cb_Vel_Adj(SliderW* o, void* v) {
  ((MidiGui*)(o->parent()))->cb_Vel_Adj_i(o,v);
}
MidiGui::MidiGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ midi_activar = new Fl_Light_Button(5, 4, 38, 18, "On");
  midi_activar->tooltip("Enable MIDI Converter - Shortcut \'M\'");
  midi_activar->shortcut(0x6d);
  midi_activar->color((Fl_Color)62);
  midi_activar->selection_color((Fl_Color)1);
  midi_activar->labelsize(10);
  midi_activar->callback((Fl_Callback*)cb_midi_activar, (void*)(2));
  midi_activar->when(FL_WHEN_CHANGED);
} // Fl_Light_Button* midi_activar
{ MIDIOctave = new Fl_Choice(104, 33, 37, 16, "Octave");
  MIDIOctave->down_box(FL_BORDER_BOX);
  MIDIOctave->selection_color(FL_FOREGROUND_COLOR);
  MIDIOctave->labelsize(8);
  MIDIOctave->labelcolor(FL_BACKGROUND2_COLOR);
  MIDIOctave->textsize(10);
  MIDIOctave->textcolor(FL_BACKGROUND2_COLOR);
  MIDIOctave->callback((Fl_Callback*)cb_MIDIOctave, (void*)(12));
  MIDIOctave->when(FL_WHEN_CHANGED);
  MIDIOctave->menu(menu_MIDIOctave);
} // Fl_Choice* MIDIOctave
{ Midi_out_Counter = new Fl_Counter(81, 4, 60, 17, "Channel");
  Midi_out_Counter->type(1);
  Midi_out_Counter->color((Fl_Color)62);
  Midi_out_Counter->labelsize(9);
  Midi_out_Counter->labelcolor(FL_BACKGROUND2_COLOR);
  Midi_out_Counter->minimum(1);
  Midi_out_Counter->maximum(16);
  Midi_out_Counter->step(1);
  Midi_out_Counter->value(1);
  Midi_out_Counter->textsize(11);
  Midi_out_Counter->callback((Fl_Callback*)cb_Midi_out_Counter);
} // Fl_Counter* Midi_out_Counter
{ Use_FFT = new Fl_Check_Button(51, 34, 15, 15, "FFT");
  Use_FFT->down_box(FL_BORDER_BOX);
  Use_FFT->labelsize(10);
  Use_FFT->labelcolor(FL_BACKGROUND2_COLOR);
  Use_FFT->callback((Fl_Callback*)cb_Use_FFT, (void*)(2));
  Use_FFT->align(Fl_Align(FL_ALIGN_TOP));
} // Fl_Check_Button* Use_FFT
{ Trig_Adj = new SliderW(147, 15, 117, 11, "Trigger");
  Trig_Adj->type(5);
  Trig_Adj->box(FL_FLAT_BOX);
  Trig_Adj->color((Fl_Color)178);
  Trig_Adj->selection_color((Fl_Color)62);
  Trig_Adj->labeltype(FL_NORMAL_LABEL);
  Trig_Adj->labelfont(0);
  Trig_Adj->labelsize(8);
  Trig_Adj->labelcolor(FL_BACKGROUND2_COLOR);
  Trig_Adj->minimum(2);
  Trig_Adj->maximum(60);
  Trig_Adj->step(1);
  Trig_Adj->textcolor(FL_BACKGROUND2_COLOR);
  Trig_Adj->callback((Fl_Callback*)cb_Trig_Adj);
  Trig_Adj->align(Fl_Align(FL_ALIGN_TOP_RIGHT));
  Trig_Adj->when(FL_WHEN_CHANGED);
} // SliderW* Trig_Adj
{ Vel_Adj = new SliderW(147, 34, 117, 11, "Velocity");
  Vel_Adj->type(5);
  Vel_Adj->box(FL_FLAT_BOX);
  Vel_Adj->color((Fl_Color)178);
  Vel_Adj->selection_color((Fl_Color)62);
  Vel_Adj->labeltype(FL_NORMAL_LABEL);
  Vel_Adj->labelfont(0);
  Vel_Adj->labelsize(8);
  Vel_Adj->labelcolor(FL_BACKGROUND2_COLOR);
  Vel_Adj->minimum(1);
  Vel_Adj->maximum(100);
  Vel_Adj->step(1);
  Vel_Adj->textcolor(FL_BACKGROUND2_COLOR);
  Vel_Adj->callback((Fl_Callback*)cb_Vel_Adj);
  Vel_Adj->align(Fl_Align(FL_ALIGN_TOP_RIGHT));
  Vel_Adj->when(FL_WHEN_CHANGED);
} // SliderW* Vel_Adj
{ Mled = new Fl_Box(51, 5, 10, 10);
  Mled->box(FL_ROUNDED_BOX);
  Mled->color(FL_RED);
  Mled->labelsize(18);
} // Fl_Box* Mled
{ MIDI_LABEL = new Fl_Box(4, 32, 44, 14, "MIDI");
  MIDI_LABEL->labelfont(1);
  MIDI_LABEL->labelcolor(FL_BACKGROUND2_COLOR);
  MIDI_LABEL->user_data((void*)(7));
  MIDI_LABEL->when(FL_WHEN_NEVER);
} // Fl_Box* MIDI_LABEL
this->m_rgui = NULL; this->m_rkr = NULL;
position(X, Y);
end();
}

void MidiGui::initialize(RKR* _rkr, RKRGUI* _rgui) {
  m_rkr = _rkr;
  m_rgui= _rgui;
}