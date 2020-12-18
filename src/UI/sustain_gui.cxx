// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "sustain_gui.h"

void SustainGui::cb_sus_activar_i(RKR_Light_Button* o, void*) {
  if(Fl::event_button()==3)
        {
         rgui->getMIDIControl(116);
         o->value(rkr->Sustainer_Bypass);
         return;
        }
        rkr->Sustainer_Bypass=(int)o->value();
        if((int) o->value()==0)
        rkr->efx_Sustainer->cleanup();
        rgui->findpos(36,(int)o->value(),o);
}
void SustainGui::cb_sus_activar(RKR_Light_Button* o, void* v) {
  ((SustainGui*)(o->parent()))->cb_sus_activar_i(o,v);
}

void SustainGui::cb_sus_preset_i(RKR_Choice* o, void* v) {
  long long ud= (long long) v;
        if((ud==0)||(ud==12036))rkr->efx_Sustainer->setpreset((int) o->value());
sus_gain->value(rkr->efx_Sustainer->getpar(0));
sus_sus->value(rkr->efx_Sustainer->getpar(1));
}
void SustainGui::cb_sus_preset(RKR_Choice* o, void* v) {
  ((SustainGui*)(o->parent()))->cb_sus_preset_i(o,v);
}

Fl_Menu_Item SustainGui::menu_sus_preset[] = {
 {"Moderate", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Extreme", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Mild", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void SustainGui::cb_sus_gain_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(312);
 return;
}
rkr->efx_Sustainer->changepar(0,(int)o->value());
}
void SustainGui::cb_sus_gain(RKR_Slider* o, void* v) {
  ((SustainGui*)(o->parent()))->cb_sus_gain_i(o,v);
}

void SustainGui::cb_sus_sus_i(RKR_Slider* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(313);
 return;
}
rkr->efx_Sustainer->changepar(1,(int)o->value());
}
void SustainGui::cb_sus_sus(RKR_Slider* o, void* v) {
  ((SustainGui*)(o->parent()))->cb_sus_sus_i(o,v);
}
SustainGui::SustainGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ sus_activar = new RKR_Light_Button(5, 4, 34, 18, "On");
  sus_activar->box(FL_UP_BOX);
  sus_activar->shortcut(0x31);
  sus_activar->color((Fl_Color)62);
  sus_activar->selection_color((Fl_Color)1);
  sus_activar->labeltype(FL_NORMAL_LABEL);
  sus_activar->labelfont(0);
  sus_activar->labelsize(10);
  sus_activar->labelcolor(FL_FOREGROUND_COLOR);
  sus_activar->callback((Fl_Callback*)cb_sus_activar, (void*)(2));
  sus_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  sus_activar->when(FL_WHEN_CHANGED);
} // RKR_Light_Button* sus_activar
{ sus_preset = new RKR_Choice(77, 4, 76, 18, "Preset");
  sus_preset->box(FL_FLAT_BOX);
  sus_preset->down_box(FL_BORDER_BOX);
  sus_preset->color(FL_BACKGROUND_COLOR);
  sus_preset->selection_color(FL_FOREGROUND_COLOR);
  sus_preset->labeltype(FL_NORMAL_LABEL);
  sus_preset->labelfont(0);
  sus_preset->labelsize(10);
  sus_preset->labelcolor(FL_BACKGROUND2_COLOR);
  sus_preset->textsize(10);
  sus_preset->textcolor(FL_BACKGROUND2_COLOR);
  sus_preset->callback((Fl_Callback*)cb_sus_preset, (void*)(12036));
  sus_preset->align(Fl_Align(FL_ALIGN_LEFT));
  sus_preset->when(FL_WHEN_RELEASE_ALWAYS);
  sus_preset->menu(menu_sus_preset);
} // RKR_Choice* sus_preset
{ sus_gain = new RKR_Slider(56, 60, 100, 10, "Gain");
  sus_gain->type(5);
  sus_gain->box(FL_FLAT_BOX);
  sus_gain->color((Fl_Color)178);
  sus_gain->selection_color((Fl_Color)62);
  sus_gain->labeltype(FL_NORMAL_LABEL);
  sus_gain->labelfont(0);
  sus_gain->labelsize(10);
  sus_gain->labelcolor(FL_BACKGROUND2_COLOR);
  sus_gain->maximum(127);
  sus_gain->step(1);
  sus_gain->textcolor(FL_BACKGROUND2_COLOR);
  sus_gain->callback((Fl_Callback*)cb_sus_gain);
  sus_gain->align(Fl_Align(FL_ALIGN_LEFT));
  sus_gain->when(FL_WHEN_CHANGED);
} // RKR_Slider* sus_gain
{ sus_sus = new RKR_Slider(56, 86, 100, 10, "Sustain");
  sus_sus->type(5);
  sus_sus->box(FL_FLAT_BOX);
  sus_sus->color((Fl_Color)178);
  sus_sus->selection_color((Fl_Color)62);
  sus_sus->labeltype(FL_NORMAL_LABEL);
  sus_sus->labelfont(0);
  sus_sus->labelsize(10);
  sus_sus->labelcolor(FL_BACKGROUND2_COLOR);
  sus_sus->minimum(1);
  sus_sus->maximum(127);
  sus_sus->step(1);
  sus_sus->value(32);
  sus_sus->textcolor(FL_BACKGROUND2_COLOR);
  sus_sus->callback((Fl_Callback*)cb_sus_sus);
  sus_sus->align(Fl_Align(FL_ALIGN_LEFT));
  sus_sus->when(FL_WHEN_CHANGED);
} // RKR_Slider* sus_sus
position(X, Y);
end();
}
