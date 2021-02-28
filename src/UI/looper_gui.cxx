// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "looper_gui.h"

void LooperGui::cb_looper_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Multi_On_Off);
 o->value(m_process->EFX_Bypass[EFX_LOOPER]);
 return;
}
m_process->EFX_Bypass[EFX_LOOPER]=(int)o->value();
if((int) o->value()==0)
m_process->Rack_Effects[EFX_LOOPER]->cleanup();
m_parent->findpos(EFX_LOOPER,(int)o->value(),o);
}
void LooperGui::cb_looper_activar(RKR_Light_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_activar_i(o,v);
}

void LooperGui::cb_looper_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==UD_PRESET_LOOPER))
    m_process->Rack_Effects[EFX_LOOPER]->setpreset((int) o->value());
    
looper_WD->value(Dry_Wet(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_DryWet)));
looper_play->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Play));
looper_record->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Record));
looper_rv->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Reverse));
looper_ap->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_AutoPlay));
looper_level1->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Level_1));
looper_level2->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Level_2));

looper_t1->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Track_1));
looper_t2->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Track_2));
looper_r1->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Rec_1));
looper_r2->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Rec_2));
looper_lnk->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Link));
looper_Tempo->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Tempo));
looper_bar->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Bar));
looper_ms->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_M_S));
}
void LooperGui::cb_looper_preset(RKR_Choice* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_preset_i(o,v);
}

Fl_Menu_Item LooperGui::menu_looper_preset[] = {
 {"Looper", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Reverse", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void LooperGui::cb_looper_WD_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_DryWet);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_DryWet,Dry_Wet((int)(o->value())));
}
void LooperGui::cb_looper_WD(RKR_Slider* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_WD_i(o,v);
}

void LooperGui::cb_looper_level1_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Level_1);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Level_1,(int)o->value());
}
void LooperGui::cb_looper_level1(RKR_Slider* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_level1_i(o,v);
}

void LooperGui::cb_looper_level2_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Level_2);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Level_2,(int)o->value());
}
void LooperGui::cb_looper_level2(RKR_Slider* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_level2_i(o,v);
}

void LooperGui::cb_looper_Tempo_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Tempo);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Tempo,(int)o->value());
}
void LooperGui::cb_looper_Tempo(RKR_Slider* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_Tempo_i(o,v);
}

void LooperGui::cb_looper_bar_i(RKR_Choice* o, void*) {
  m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Bar,(int)o->value());
}
void LooperGui::cb_looper_bar(RKR_Choice* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_bar_i(o,v);
}

void LooperGui::cb_looper_ms_i(RKR_Choice* o, void*) {
  m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_M_S,(int)o->value());
}
void LooperGui::cb_looper_ms(RKR_Choice* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_ms_i(o,v);
}

void LooperGui::cb_looper_rv_i(RKR_Check_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Reverse);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Reverse,(int)o->value());
}
void LooperGui::cb_looper_rv(RKR_Check_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_rv_i(o,v);
}

void LooperGui::cb_looper_ap_i(RKR_Check_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_AutoPlay);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_AutoPlay,(int)o->value());
}
void LooperGui::cb_looper_ap(RKR_Check_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_ap_i(o,v);
}

void LooperGui::cb_looper_play_i(RKR_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Play);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Play,(int)o->value());
m_parent->update_looper();
}
void LooperGui::cb_looper_play(RKR_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_play_i(o,v);
}

void LooperGui::cb_looper_stop_i(RKR_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Stop);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Stop,(int)o->value());
m_parent->update_looper();
}
void LooperGui::cb_looper_stop(RKR_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_stop_i(o,v);
}

void LooperGui::cb_looper_record_i(RKR_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Record);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Record,(int)o->value());
m_parent->update_looper();
}
void LooperGui::cb_looper_record(RKR_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_record_i(o,v);
}

void LooperGui::cb_looper_r1_i(RKR_Check_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Rec_1);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Rec_1,(int)o->value());
}
void LooperGui::cb_looper_r1(RKR_Check_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_r1_i(o,v);
}

void LooperGui::cb_looper_r2_i(RKR_Check_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Rec_2);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Rec_2,(int)o->value());
}
void LooperGui::cb_looper_r2(RKR_Check_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_r2_i(o,v);
}

void LooperGui::cb_looper_t1_i(RKR_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Track_1);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Track_1,(int)o->value());
m_parent->update_looper();
}
void LooperGui::cb_looper_t1(RKR_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_t1_i(o,v);
}

void LooperGui::cb_looper_t2_i(RKR_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Track_2);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Track_2,(int)o->value());
m_parent->update_looper();
}
void LooperGui::cb_looper_t2(RKR_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_t2_i(o,v);
}

void LooperGui::cb_looper_lnk_i(RKR_Check_Button* o, void*) {
  m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Link,(int)o->value());
}
void LooperGui::cb_looper_lnk(RKR_Check_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_lnk_i(o,v);
}

void LooperGui::cb_looper_clear_i(RKR_Button* o, void*) {
  if(Fl::event_button()==FL_RIGHT_MOUSE)
{
 m_parent->getMIDIControl(MC_Looper_Clear);
 return;
}
m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Clear,(int)o->value());
m_parent->update_looper();
}
void LooperGui::cb_looper_clear(RKR_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_clear_i(o,v);
}

void LooperGui::cb_looper_mt_i(RKR_Check_Button* o, void*) {
  m_process->Rack_Effects[EFX_LOOPER]->changepar(Looper_Metro,(int)o->value());
}
void LooperGui::cb_looper_mt(RKR_Check_Button* o, void* v) {
  ((LooperGui*)(o->parent()))->cb_looper_mt_i(o,v);
}
LooperGui::LooperGui(int X, int Y, int W, int H, const char *L)
  : RKR_Gui_Effect(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
this->when(FL_WHEN_RELEASE);
{ RKR_Light_Button* o = looper_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  looper_activar->box(FL_UP_BOX);
  looper_activar->shortcut(0x35);
  looper_activar->color((Fl_Color)62);
  looper_activar->selection_color((Fl_Color)1);
  looper_activar->labeltype(FL_NORMAL_LABEL);
  looper_activar->labelfont(0);
  looper_activar->labelsize(10);
  looper_activar->labelcolor(FL_FOREGROUND_COLOR);
  looper_activar->callback((Fl_Callback*)cb_looper_activar, (void*)(2));
  looper_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  looper_activar->when(FL_WHEN_CHANGED);
  activate_effect = o;
} // RKR_Light_Button* looper_activar
{ RKR_Choice* o = looper_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  looper_preset->box(FL_FLAT_BOX);
  looper_preset->down_box(FL_BORDER_BOX);
  looper_preset->color(FL_BACKGROUND_COLOR);
  looper_preset->selection_color(FL_FOREGROUND_COLOR);
  looper_preset->labeltype(FL_NORMAL_LABEL);
  looper_preset->labelfont(0);
  looper_preset->labelsize(10);
  looper_preset->labelcolor(FL_BACKGROUND2_COLOR);
  looper_preset->textsize(10);
  looper_preset->textcolor(FL_BACKGROUND2_COLOR);
  looper_preset->callback((Fl_Callback*)cb_looper_preset, (void*)(UD_PRESET_LOOPER));
  looper_preset->align(Fl_Align(FL_ALIGN_LEFT));
  looper_preset->when(FL_WHEN_RELEASE_ALWAYS);
  looper_preset->menu(menu_looper_preset);
  preset_choice = o;
} // RKR_Choice* looper_preset
{ looper_WD = new RKR_Slider(56, 25, 100, 10, "Dry/Wet");
  looper_WD->type(5);
  looper_WD->box(FL_FLAT_BOX);
  looper_WD->color((Fl_Color)178);
  looper_WD->selection_color((Fl_Color)62);
  looper_WD->labeltype(FL_NORMAL_LABEL);
  looper_WD->labelfont(0);
  looper_WD->labelsize(10);
  looper_WD->labelcolor(FL_BACKGROUND2_COLOR);
  looper_WD->maximum(127);
  looper_WD->step(1);
  looper_WD->textcolor(FL_BACKGROUND2_COLOR);
  looper_WD->callback((Fl_Callback*)cb_looper_WD);
  looper_WD->align(Fl_Align(FL_ALIGN_LEFT));
  looper_WD->when(FL_WHEN_CHANGED);
} // RKR_Slider* looper_WD
{ looper_level1 = new RKR_Slider(56, 37, 100, 10, "Level 1");
  looper_level1->type(5);
  looper_level1->box(FL_FLAT_BOX);
  looper_level1->color((Fl_Color)178);
  looper_level1->selection_color((Fl_Color)62);
  looper_level1->labeltype(FL_NORMAL_LABEL);
  looper_level1->labelfont(0);
  looper_level1->labelsize(10);
  looper_level1->labelcolor(FL_BACKGROUND2_COLOR);
  looper_level1->maximum(127);
  looper_level1->step(1);
  looper_level1->textcolor(FL_BACKGROUND2_COLOR);
  looper_level1->callback((Fl_Callback*)cb_looper_level1);
  looper_level1->align(Fl_Align(FL_ALIGN_LEFT));
  looper_level1->when(FL_WHEN_RELEASE);
} // RKR_Slider* looper_level1
{ looper_level2 = new RKR_Slider(56, 49, 100, 10, "Level 2");
  looper_level2->type(5);
  looper_level2->box(FL_FLAT_BOX);
  looper_level2->color((Fl_Color)178);
  looper_level2->selection_color((Fl_Color)62);
  looper_level2->labeltype(FL_NORMAL_LABEL);
  looper_level2->labelfont(0);
  looper_level2->labelsize(10);
  looper_level2->labelcolor(FL_BACKGROUND2_COLOR);
  looper_level2->maximum(127);
  looper_level2->step(1);
  looper_level2->textcolor(FL_BACKGROUND2_COLOR);
  looper_level2->callback((Fl_Callback*)cb_looper_level2);
  looper_level2->align(Fl_Align(FL_ALIGN_LEFT));
  looper_level2->when(FL_WHEN_RELEASE);
} // RKR_Slider* looper_level2
{ looper_Tempo = new RKR_Slider(56, 61, 100, 10, "Tempo");
  looper_Tempo->type(5);
  looper_Tempo->box(FL_FLAT_BOX);
  looper_Tempo->color((Fl_Color)178);
  looper_Tempo->selection_color((Fl_Color)62);
  looper_Tempo->labeltype(FL_NORMAL_LABEL);
  looper_Tempo->labelfont(0);
  looper_Tempo->labelsize(10);
  looper_Tempo->labelcolor(FL_BACKGROUND2_COLOR);
  looper_Tempo->minimum(20);
  looper_Tempo->maximum(380);
  looper_Tempo->step(1);
  looper_Tempo->value(100);
  looper_Tempo->textcolor(FL_BACKGROUND2_COLOR);
  looper_Tempo->callback((Fl_Callback*)cb_looper_Tempo);
  looper_Tempo->align(Fl_Align(FL_ALIGN_LEFT));
  looper_Tempo->when(FL_WHEN_RELEASE);
} // RKR_Slider* looper_Tempo
{ RKR_Choice* o = looper_bar = new RKR_Choice(57, 73, 40, 15, "Time Sig.");
  looper_bar->box(FL_FLAT_BOX);
  looper_bar->down_box(FL_BORDER_BOX);
  looper_bar->color(FL_BACKGROUND_COLOR);
  looper_bar->selection_color(FL_FOREGROUND_COLOR);
  looper_bar->labeltype(FL_NORMAL_LABEL);
  looper_bar->labelfont(0);
  looper_bar->labelsize(10);
  looper_bar->labelcolor(FL_BACKGROUND2_COLOR);
  looper_bar->textsize(10);
  looper_bar->textcolor(FL_BACKGROUND2_COLOR);
  looper_bar->callback((Fl_Callback*)cb_looper_bar);
  looper_bar->align(Fl_Align(FL_ALIGN_LEFT));
  looper_bar->when(FL_WHEN_RELEASE_ALWAYS);
  o->menu(m_looper_bar->get_time_sig());
} // RKR_Choice* looper_bar
{ RKR_Choice* o = looper_ms = new RKR_Choice(121, 73, 29, 15, "MS");
  looper_ms->box(FL_FLAT_BOX);
  looper_ms->down_box(FL_BORDER_BOX);
  looper_ms->color(FL_BACKGROUND_COLOR);
  looper_ms->selection_color(FL_FOREGROUND_COLOR);
  looper_ms->labeltype(FL_NORMAL_LABEL);
  looper_ms->labelfont(0);
  looper_ms->labelsize(10);
  looper_ms->labelcolor(FL_BACKGROUND2_COLOR);
  looper_ms->textsize(10);
  looper_ms->textcolor(FL_BACKGROUND2_COLOR);
  looper_ms->callback((Fl_Callback*)cb_looper_ms);
  looper_ms->align(Fl_Align(FL_ALIGN_LEFT));
  looper_ms->when(FL_WHEN_RELEASE_ALWAYS);
  o->menu(m_looper_ms->get_metronome_sound());
} // RKR_Choice* looper_ms
{ looper_rv = new RKR_Check_Button(8, 89, 61, 15, "Reverse");
  looper_rv->tooltip("Play Loop in Reverse");
  looper_rv->box(FL_NO_BOX);
  looper_rv->down_box(FL_BORDER_BOX);
  looper_rv->color(FL_BACKGROUND_COLOR);
  looper_rv->selection_color(FL_FOREGROUND_COLOR);
  looper_rv->labeltype(FL_NORMAL_LABEL);
  looper_rv->labelfont(0);
  looper_rv->labelsize(10);
  looper_rv->labelcolor(FL_BACKGROUND2_COLOR);
  looper_rv->callback((Fl_Callback*)cb_looper_rv, (void*)(2));
  looper_rv->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  looper_rv->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* looper_rv
{ looper_ap = new RKR_Check_Button(78, 89, 67, 15, "Auto Play");
  looper_ap->box(FL_NO_BOX);
  looper_ap->down_box(FL_BORDER_BOX);
  looper_ap->color(FL_BACKGROUND_COLOR);
  looper_ap->selection_color(FL_FOREGROUND_COLOR);
  looper_ap->labeltype(FL_NORMAL_LABEL);
  looper_ap->labelfont(0);
  looper_ap->labelsize(10);
  looper_ap->labelcolor(FL_BACKGROUND2_COLOR);
  looper_ap->callback((Fl_Callback*)cb_looper_ap, (void*)(2));
  looper_ap->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  looper_ap->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* looper_ap
{ RKR_Box* o = Box_Play = new RKR_Box(4, 103, 52, 14, "Play/Stop");
  Box_Play->box(FL_NO_BOX);
  Box_Play->color(FL_BACKGROUND_COLOR);
  Box_Play->selection_color(FL_BACKGROUND_COLOR);
  Box_Play->labeltype(FL_NORMAL_LABEL);
  Box_Play->labelfont(0);
  Box_Play->labelsize(10);
  Box_Play->labelcolor(FL_BACKGROUND2_COLOR);
  Box_Play->align(Fl_Align(FL_ALIGN_CENTER));
  Box_Play->when(FL_WHEN_RELEASE);
  o->set_label_offset(0);
} // RKR_Box* Box_Play
{ RKR_Box* o = Box_P = new RKR_Box(58, 103, 44, 14, "Pause");
  Box_P->box(FL_NO_BOX);
  Box_P->color(FL_BACKGROUND_COLOR);
  Box_P->selection_color(FL_BACKGROUND_COLOR);
  Box_P->labeltype(FL_NORMAL_LABEL);
  Box_P->labelfont(0);
  Box_P->labelsize(10);
  Box_P->labelcolor(FL_BACKGROUND2_COLOR);
  Box_P->align(Fl_Align(FL_ALIGN_CENTER));
  Box_P->when(FL_WHEN_RELEASE);
  o->set_label_offset(0);
} // RKR_Box* Box_P
{ RKR_Box* o = new RKR_Box(109, 103, 44, 14, "Record");
  o->box(FL_NO_BOX);
  o->color(FL_BACKGROUND_COLOR);
  o->selection_color(FL_BACKGROUND_COLOR);
  o->labeltype(FL_NORMAL_LABEL);
  o->labelfont(0);
  o->labelsize(10);
  o->labelcolor(FL_BACKGROUND2_COLOR);
  o->align(Fl_Align(FL_ALIGN_CENTER));
  o->when(FL_WHEN_RELEASE);
  o->set_label_offset(0);
} // RKR_Box* o
{ RKR_Button* o = looper_play = new RKR_Button(8, 117, 44, 22, "@|>");
  looper_play->tooltip("Play - Shortcut \'F5\'");
  looper_play->type(1);
  looper_play->box(FL_UP_BOX);
  looper_play->shortcut(0xffc2);
  looper_play->color(FL_BACKGROUND_COLOR);
  looper_play->selection_color(FL_BACKGROUND_COLOR);
  looper_play->labeltype(FL_NORMAL_LABEL);
  looper_play->labelfont(0);
  looper_play->labelsize(14);
  looper_play->labelcolor(FL_FOREGROUND_COLOR);
  looper_play->callback((Fl_Callback*)cb_looper_play, (void*)(2));
  looper_play->align(Fl_Align(FL_ALIGN_CENTER));
  looper_play->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
} // RKR_Button* looper_play
{ RKR_Button* o = looper_stop = new RKR_Button(59, 117, 44, 22, "@||");
  looper_stop->tooltip("Stop - Shortcut \'F6\'");
  looper_stop->type(1);
  looper_stop->box(FL_UP_BOX);
  looper_stop->shortcut(0xffc3);
  looper_stop->color(FL_BACKGROUND_COLOR);
  looper_stop->selection_color(FL_BACKGROUND_COLOR);
  looper_stop->labeltype(FL_NORMAL_LABEL);
  looper_stop->labelfont(0);
  looper_stop->labelsize(14);
  looper_stop->labelcolor(FL_FOREGROUND_COLOR);
  looper_stop->callback((Fl_Callback*)cb_looper_stop, (void*)(2));
  looper_stop->align(Fl_Align(FL_ALIGN_CENTER));
  looper_stop->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
} // RKR_Button* looper_stop
{ RKR_Button* o = looper_record = new RKR_Button(109, 117, 44, 22, "@circle");
  looper_record->type(1);
  looper_record->box(FL_UP_BOX);
  looper_record->color(FL_BACKGROUND_COLOR);
  looper_record->selection_color(FL_BACKGROUND_COLOR);
  looper_record->labeltype(FL_NORMAL_LABEL);
  looper_record->labelfont(0);
  looper_record->labelsize(14);
  looper_record->labelcolor((Fl_Color)1);
  looper_record->callback((Fl_Callback*)cb_looper_record, (void*)(2));
  looper_record->align(Fl_Align(FL_ALIGN_CENTER));
  looper_record->when(FL_WHEN_RELEASE);
  o->set_label_offset(4);
} // RKR_Button* looper_record
{ RKR_Box* o = new RKR_Box(71, 149, 39, 14, "Track");
  o->box(FL_NO_BOX);
  o->color(FL_BACKGROUND_COLOR);
  o->selection_color(FL_BACKGROUND_COLOR);
  o->labeltype(FL_NORMAL_LABEL);
  o->labelfont(0);
  o->labelsize(10);
  o->labelcolor(FL_BACKGROUND2_COLOR);
  o->align(Fl_Align(FL_ALIGN_CENTER));
  o->when(FL_WHEN_RELEASE);
  o->set_label_offset(0);
} // RKR_Box* o
{ looper_r1 = new RKR_Check_Button(8, 153, 15, 15, "R1");
  looper_r1->tooltip("Record on Track 1");
  looper_r1->box(FL_NO_BOX);
  looper_r1->down_box(FL_BORDER_BOX);
  looper_r1->color(FL_BACKGROUND_COLOR);
  looper_r1->selection_color(FL_FOREGROUND_COLOR);
  looper_r1->labeltype(FL_NORMAL_LABEL);
  looper_r1->labelfont(0);
  looper_r1->labelsize(10);
  looper_r1->labelcolor(FL_BACKGROUND2_COLOR);
  looper_r1->callback((Fl_Callback*)cb_looper_r1, (void*)(2));
  looper_r1->align(Fl_Align(FL_ALIGN_TOP));
  looper_r1->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* looper_r1
{ looper_r2 = new RKR_Check_Button(27, 153, 15, 15, "R2");
  looper_r2->tooltip("Record on Track 2");
  looper_r2->box(FL_NO_BOX);
  looper_r2->down_box(FL_BORDER_BOX);
  looper_r2->color(FL_BACKGROUND_COLOR);
  looper_r2->selection_color(FL_FOREGROUND_COLOR);
  looper_r2->labeltype(FL_NORMAL_LABEL);
  looper_r2->labelfont(0);
  looper_r2->labelsize(10);
  looper_r2->labelcolor(FL_BACKGROUND2_COLOR);
  looper_r2->callback((Fl_Callback*)cb_looper_r2, (void*)(2));
  looper_r2->align(Fl_Align(FL_ALIGN_TOP));
  looper_r2->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* looper_r2
{ looper_t1 = new RKR_Button(111, 147, 18, 18, "1");
  looper_t1->tooltip("Enable Play, Stop, Record on Track 1");
  looper_t1->type(1);
  looper_t1->box(FL_UP_BOX);
  looper_t1->color(FL_BACKGROUND_COLOR);
  looper_t1->selection_color(FL_BACKGROUND_COLOR);
  looper_t1->labeltype(FL_NORMAL_LABEL);
  looper_t1->labelfont(0);
  looper_t1->labelsize(10);
  looper_t1->labelcolor(FL_FOREGROUND_COLOR);
  looper_t1->callback((Fl_Callback*)cb_looper_t1, (void*)(2));
  looper_t1->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
  looper_t1->when(FL_WHEN_RELEASE);
} // RKR_Button* looper_t1
{ looper_t2 = new RKR_Button(134, 147, 18, 18, "2");
  looper_t2->tooltip("Enable Play, Stop, Record on Track 2");
  looper_t2->type(1);
  looper_t2->box(FL_UP_BOX);
  looper_t2->color(FL_BACKGROUND_COLOR);
  looper_t2->selection_color(FL_BACKGROUND_COLOR);
  looper_t2->labeltype(FL_NORMAL_LABEL);
  looper_t2->labelfont(0);
  looper_t2->labelsize(10);
  looper_t2->labelcolor(FL_FOREGROUND_COLOR);
  looper_t2->callback((Fl_Callback*)cb_looper_t2, (void*)(2));
  looper_t2->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
  looper_t2->when(FL_WHEN_RELEASE);
} // RKR_Button* looper_t2
{ looper_lnk = new RKR_Check_Button(27, 167, 15, 15, "Lnk");
  looper_lnk->tooltip("Link track 1 and track 2 with the same length");
  looper_lnk->box(FL_NO_BOX);
  looper_lnk->down_box(FL_BORDER_BOX);
  looper_lnk->color(FL_BACKGROUND_COLOR);
  looper_lnk->selection_color(FL_FOREGROUND_COLOR);
  looper_lnk->labeltype(FL_NORMAL_LABEL);
  looper_lnk->labelfont(0);
  looper_lnk->labelsize(10);
  looper_lnk->labelcolor(FL_BACKGROUND2_COLOR);
  looper_lnk->callback((Fl_Callback*)cb_looper_lnk, (void*)(2));
  looper_lnk->align(Fl_Align(FL_ALIGN_LEFT));
  looper_lnk->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* looper_lnk
{ looper_clear = new RKR_Button(46, 165, 43, 14, "Clear");
  looper_clear->tooltip("Erase the Selected Track");
  looper_clear->box(FL_UP_BOX);
  looper_clear->color(FL_BACKGROUND_COLOR);
  looper_clear->selection_color(FL_BACKGROUND_COLOR);
  looper_clear->labeltype(FL_NORMAL_LABEL);
  looper_clear->labelfont(0);
  looper_clear->labelsize(10);
  looper_clear->labelcolor(FL_FOREGROUND_COLOR);
  looper_clear->callback((Fl_Callback*)cb_looper_clear, (void*)(2));
  looper_clear->align(Fl_Align(FL_ALIGN_CENTER));
  looper_clear->when(FL_WHEN_RELEASE);
} // RKR_Button* looper_clear
{ looper_mt = new RKR_Check_Button(93, 167, 27, 15, "M");
  looper_mt->tooltip("Metronome");
  looper_mt->box(FL_NO_BOX);
  looper_mt->down_box(FL_BORDER_BOX);
  looper_mt->color(FL_BACKGROUND_COLOR);
  looper_mt->selection_color(FL_FOREGROUND_COLOR);
  looper_mt->labeltype(FL_NORMAL_LABEL);
  looper_mt->labelfont(0);
  looper_mt->labelsize(10);
  looper_mt->labelcolor(FL_BACKGROUND2_COLOR);
  looper_mt->callback((Fl_Callback*)cb_looper_mt, (void*)(2));
  looper_mt->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
  looper_mt->when(FL_WHEN_RELEASE);
} // RKR_Check_Button* looper_mt
{ L_TimePos = new RKR_Box(121, 166, 35, 14);
  L_TimePos->box(FL_DOWN_BOX);
  L_TimePos->color(FL_BACKGROUND_COLOR);
  L_TimePos->selection_color(FL_BACKGROUND_COLOR);
  L_TimePos->labeltype(FL_NORMAL_LABEL);
  L_TimePos->labelfont(0);
  L_TimePos->labelsize(14);
  L_TimePos->labelcolor(FL_FOREGROUND_COLOR);
  L_TimePos->align(Fl_Align(68|FL_ALIGN_INSIDE));
  L_TimePos->when(FL_WHEN_RELEASE);
} // RKR_Box* L_TimePos
position(X, Y);
end();
}

void LooperGui::parameter_refresh(int index) {
  switch(index)
      {
      case Looper_DryWet:
          looper_WD->value(Dry_Wet(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_DryWet)));
          break;
      case Looper_Level_1:
          looper_level1->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Level_1));
          break;
      case Looper_Level_2:
          looper_level2->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Level_2));
          break;
      case Looper_Reverse:
          looper_rv->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Reverse));
          break;
      case Looper_AutoPlay:
          looper_ap->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_AutoPlay));
          break;
      case Looper_Play:
          looper_play->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Play));
          m_parent->update_looper();
          break;
      case Looper_Stop:
          looper_stop->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Stop));
          m_parent->update_looper();
          break;
      case Looper_Record:
          looper_record->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Record));
          m_parent->update_looper();
          break;
      case Looper_Rec_1:
          looper_r1->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Rec_1));
          break;
      case Looper_Rec_2:
          looper_r2->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Rec_2));
          break;
      case Looper_Track_1:
          looper_t1->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Track_1));
          m_parent->update_looper();
          break;
      case Looper_Track_2:
          looper_t2->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Track_2));
          m_parent->update_looper();
          break;
      case Looper_Clear:
          /* Setting the looper_clear button after MIDI control really does not work. 
             The button for the gui is just press and release, i.e. not a toggle button.
             Since the clear flag Pclear is set and remains set until another button such
             as play or record gets pushed, the Pclear variable returned by getpar(4) is
             going to show pressed (value = 1) and set the button as pressed here. And it
             will remain in that state until restart. If pressed manually, it just does
             unpress and release back to press.  Would be nice to show the press and release
             with MIDI control, but it would probably have to be a timer issue and additional
             complications for very little value. MIDI control does work, but we should not show
             it on the gui button here with this method */
      //    looper_clear->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Clear));
          m_parent->update_looper();
          break;
      }
}

void LooperGui::tap_tempo_update() {
  looper_Tempo->value(m_process->Rack_Effects[EFX_LOOPER]->getpar(Looper_Tempo));
}
