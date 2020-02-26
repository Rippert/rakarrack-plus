// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "rbecho_gui.h"

void RbechoGui::cb_rbecho_activar_i(Fl_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->RBEcho_Bypass);
 return;
}
rkr->RBEcho_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_RBEcho->cleanup();
rgui->findpos(32,(int)o->value(),o);
}
void RbechoGui::cb_rbecho_activar(Fl_Light_Button* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_activar_i(o,v);
}

void RbechoGui::cb_rbecho_preset_i(Fl_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12032))rkr->efx_RBEcho->setpreset((int) o->value());
rbecho_WD->value(Dry_Wet(rkr->efx_RBEcho->getpar(0)));
rbecho_pan->value(rkr->efx_RBEcho->getpar(1)-64);
rbecho_delay->value(rkr->efx_RBEcho->getpar(2));
rbecho_LRdl->value(rkr->efx_RBEcho->getpar(3));
rbecho_angle->value(rkr->efx_RBEcho->getpar(4)-64);
rbecho_fb->value(rkr->efx_RBEcho->getpar(5));
rbecho_damp->value(rkr->efx_RBEcho->getpar(6));
rbecho_RV->value(rkr->efx_RBEcho->getpar(7));
rbecho_subdiv->value(rkr->efx_RBEcho->getpar(8));
rbecho_es->value(rkr->efx_RBEcho->getpar(9));
}
void RbechoGui::cb_rbecho_preset(Fl_Choice* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_preset_i(o,v);
}

Fl_Menu_Item RbechoGui::menu_rbecho_preset[] = {
 {"Echo 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Echo 2", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Echo 3", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void RbechoGui::cb_rbecho_WD_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(303);
 return;
}
rkr->efx_RBEcho->changepar(0,Dry_Wet((int)(o->value())));
}
void RbechoGui::cb_rbecho_WD(SliderW* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_WD_i(o,v);
}

void RbechoGui::cb_rbecho_RV_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(304);
 return;
}
rkr->efx_RBEcho->changepar(7,(int)o->value());
}
void RbechoGui::cb_rbecho_RV(SliderW* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_RV_i(o,v);
}

void RbechoGui::cb_rbecho_pan_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(305);
 return;
}
rkr->efx_RBEcho->changepar(1,(int)(o->value()+64));
}
void RbechoGui::cb_rbecho_pan(SliderW* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_pan_i(o,v);
}

void RbechoGui::cb_rbecho_delay_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(306);
 return;
}
rkr->efx_RBEcho->changepar(2,(int)o->value());
}
void RbechoGui::cb_rbecho_delay(SliderW* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_delay_i(o,v);
}

void RbechoGui::cb_rbecho_LRdl_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(307);
 return;
}
rkr->efx_RBEcho->changepar(3,(int)o->value());
}
void RbechoGui::cb_rbecho_LRdl(SliderW* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_LRdl_i(o,v);
}

void RbechoGui::cb_rbecho_fb_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(308);
 return;
}
rkr->efx_RBEcho->changepar(5,(int)o->value());
}
void RbechoGui::cb_rbecho_fb(SliderW* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_fb_i(o,v);
}

void RbechoGui::cb_rbecho_subdiv_i(Fl_Choice* o, void*) {
  rkr->efx_RBEcho->changepar(8,(int)o->value());
}
void RbechoGui::cb_rbecho_subdiv(Fl_Choice* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_subdiv_i(o,v);
}

void RbechoGui::cb_rbecho_damp_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(309);
 return;
}
rkr->efx_RBEcho->changepar(6,(int)o->value());
}
void RbechoGui::cb_rbecho_damp(SliderW* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_damp_i(o,v);
}

void RbechoGui::cb_rbecho_es_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(310);
 return;
}
rkr->efx_RBEcho->changepar(9,(int)o->value());
}
void RbechoGui::cb_rbecho_es(SliderW* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_es_i(o,v);
}

void RbechoGui::cb_rbecho_angle_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(311);
 return;
}
rkr->efx_RBEcho->changepar(4,(int)(o->value()+64));
}
void RbechoGui::cb_rbecho_angle(SliderW* o, void* v) {
  ((RbechoGui*)(o->parent()))->cb_rbecho_angle_i(o,v);
}
RbechoGui::RbechoGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ rbecho_activar = new Fl_Light_Button(5, 4, 34, 18, "On");
  rbecho_activar->shortcut(0x35);
  rbecho_activar->color((Fl_Color)62);
  rbecho_activar->selection_color((Fl_Color)1);
  rbecho_activar->labelsize(10);
  rbecho_activar->callback((Fl_Callback*)cb_rbecho_activar, (void*)(2));
  rbecho_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  rbecho_activar->when(FL_WHEN_CHANGED);
} // Fl_Light_Button* rbecho_activar
{ rbecho_preset = new Fl_Choice(77, 4, 76, 18, "Preset");
  rbecho_preset->down_box(FL_BORDER_BOX);
  rbecho_preset->selection_color(FL_FOREGROUND_COLOR);
  rbecho_preset->labelsize(10);
  rbecho_preset->labelcolor(FL_BACKGROUND2_COLOR);
  rbecho_preset->textsize(10);
  rbecho_preset->textcolor(FL_BACKGROUND2_COLOR);
  rbecho_preset->callback((Fl_Callback*)cb_rbecho_preset, (void*)(12032));
  rbecho_preset->when(FL_WHEN_RELEASE_ALWAYS);
  rbecho_preset->menu(menu_rbecho_preset);
} // Fl_Choice* rbecho_preset
{ rbecho_WD = new SliderW(51, 27, 100, 10, "Dry/Wet");
  rbecho_WD->type(5);
  rbecho_WD->box(FL_FLAT_BOX);
  rbecho_WD->color((Fl_Color)178);
  rbecho_WD->selection_color((Fl_Color)62);
  rbecho_WD->labeltype(FL_NORMAL_LABEL);
  rbecho_WD->labelfont(0);
  rbecho_WD->labelsize(10);
  rbecho_WD->labelcolor(FL_BACKGROUND2_COLOR);
  rbecho_WD->maximum(127);
  rbecho_WD->step(1);
  rbecho_WD->textcolor(FL_BACKGROUND2_COLOR);
  rbecho_WD->callback((Fl_Callback*)cb_rbecho_WD);
  rbecho_WD->align(Fl_Align(FL_ALIGN_LEFT));
  rbecho_WD->when(FL_WHEN_CHANGED);
} // SliderW* rbecho_WD
{ rbecho_RV = new SliderW(51, 41, 100, 10, "Reverse");
  rbecho_RV->type(5);
  rbecho_RV->box(FL_FLAT_BOX);
  rbecho_RV->color((Fl_Color)178);
  rbecho_RV->selection_color((Fl_Color)62);
  rbecho_RV->labeltype(FL_NORMAL_LABEL);
  rbecho_RV->labelfont(0);
  rbecho_RV->labelsize(10);
  rbecho_RV->labelcolor(FL_BACKGROUND2_COLOR);
  rbecho_RV->maximum(127);
  rbecho_RV->step(1);
  rbecho_RV->textcolor(FL_BACKGROUND2_COLOR);
  rbecho_RV->callback((Fl_Callback*)cb_rbecho_RV);
  rbecho_RV->align(Fl_Align(FL_ALIGN_LEFT));
  rbecho_RV->when(FL_WHEN_CHANGED);
} // SliderW* rbecho_RV
{ rbecho_pan = new SliderW(51, 55, 100, 10, "Pan");
  rbecho_pan->type(5);
  rbecho_pan->box(FL_FLAT_BOX);
  rbecho_pan->color((Fl_Color)178);
  rbecho_pan->selection_color((Fl_Color)62);
  rbecho_pan->labeltype(FL_NORMAL_LABEL);
  rbecho_pan->labelfont(0);
  rbecho_pan->labelsize(10);
  rbecho_pan->labelcolor(FL_BACKGROUND2_COLOR);
  rbecho_pan->minimum(-64);
  rbecho_pan->maximum(63);
  rbecho_pan->step(1);
  rbecho_pan->textcolor(FL_BACKGROUND2_COLOR);
  rbecho_pan->callback((Fl_Callback*)cb_rbecho_pan);
  rbecho_pan->align(Fl_Align(FL_ALIGN_LEFT));
  rbecho_pan->when(FL_WHEN_CHANGED);
} // SliderW* rbecho_pan
{ rbecho_delay = new SliderW(51, 69, 100, 10, "Tempo");
  rbecho_delay->type(5);
  rbecho_delay->box(FL_FLAT_BOX);
  rbecho_delay->color((Fl_Color)178);
  rbecho_delay->selection_color((Fl_Color)62);
  rbecho_delay->labeltype(FL_NORMAL_LABEL);
  rbecho_delay->labelfont(0);
  rbecho_delay->labelsize(10);
  rbecho_delay->labelcolor(FL_BACKGROUND2_COLOR);
  rbecho_delay->minimum(1);
  rbecho_delay->maximum(600);
  rbecho_delay->step(1);
  rbecho_delay->value(20);
  rbecho_delay->textcolor(FL_BACKGROUND2_COLOR);
  rbecho_delay->callback((Fl_Callback*)cb_rbecho_delay);
  rbecho_delay->align(Fl_Align(FL_ALIGN_LEFT));
  rbecho_delay->when(FL_WHEN_RELEASE);
} // SliderW* rbecho_delay
{ rbecho_LRdl = new SliderW(51, 83, 100, 10, "LRdl.");
  rbecho_LRdl->type(5);
  rbecho_LRdl->box(FL_FLAT_BOX);
  rbecho_LRdl->color((Fl_Color)178);
  rbecho_LRdl->selection_color((Fl_Color)62);
  rbecho_LRdl->labeltype(FL_NORMAL_LABEL);
  rbecho_LRdl->labelfont(0);
  rbecho_LRdl->labelsize(10);
  rbecho_LRdl->labelcolor(FL_BACKGROUND2_COLOR);
  rbecho_LRdl->maximum(127);
  rbecho_LRdl->step(1);
  rbecho_LRdl->textcolor(FL_BACKGROUND2_COLOR);
  rbecho_LRdl->callback((Fl_Callback*)cb_rbecho_LRdl);
  rbecho_LRdl->align(Fl_Align(FL_ALIGN_LEFT));
  rbecho_LRdl->when(FL_WHEN_RELEASE);
} // SliderW* rbecho_LRdl
{ rbecho_fb = new SliderW(51, 97, 100, 10, "Fb.");
  rbecho_fb->type(5);
  rbecho_fb->box(FL_FLAT_BOX);
  rbecho_fb->color((Fl_Color)178);
  rbecho_fb->selection_color((Fl_Color)62);
  rbecho_fb->labeltype(FL_NORMAL_LABEL);
  rbecho_fb->labelfont(0);
  rbecho_fb->labelsize(10);
  rbecho_fb->labelcolor(FL_BACKGROUND2_COLOR);
  rbecho_fb->maximum(127);
  rbecho_fb->step(1);
  rbecho_fb->textcolor(FL_BACKGROUND2_COLOR);
  rbecho_fb->callback((Fl_Callback*)cb_rbecho_fb);
  rbecho_fb->align(Fl_Align(FL_ALIGN_LEFT));
  rbecho_fb->when(FL_WHEN_CHANGED);
} // SliderW* rbecho_fb
{ Fl_Choice* o = rbecho_subdiv = new Fl_Choice(77, 111, 76, 18, "SubDivision");
  rbecho_subdiv->down_box(FL_BORDER_BOX);
  rbecho_subdiv->selection_color(FL_FOREGROUND_COLOR);
  rbecho_subdiv->labelsize(10);
  rbecho_subdiv->labelcolor(FL_BACKGROUND2_COLOR);
  rbecho_subdiv->textsize(10);
  rbecho_subdiv->textcolor(FL_BACKGROUND2_COLOR);
  rbecho_subdiv->callback((Fl_Callback*)cb_rbecho_subdiv);
  rbecho_subdiv->when(FL_WHEN_RELEASE_ALWAYS);
  o->menu(m_subdiv_menu->get_subdiv_type());
} // Fl_Choice* rbecho_subdiv
{ rbecho_damp = new SliderW(51, 134, 100, 10, "Damp");
  rbecho_damp->type(5);
  rbecho_damp->box(FL_FLAT_BOX);
  rbecho_damp->color((Fl_Color)178);
  rbecho_damp->selection_color((Fl_Color)62);
  rbecho_damp->labeltype(FL_NORMAL_LABEL);
  rbecho_damp->labelfont(0);
  rbecho_damp->labelsize(10);
  rbecho_damp->labelcolor(FL_BACKGROUND2_COLOR);
  rbecho_damp->maximum(127);
  rbecho_damp->step(1);
  rbecho_damp->textcolor(FL_BACKGROUND2_COLOR);
  rbecho_damp->callback((Fl_Callback*)cb_rbecho_damp);
  rbecho_damp->align(Fl_Align(FL_ALIGN_LEFT));
  rbecho_damp->when(FL_WHEN_CHANGED);
} // SliderW* rbecho_damp
{ rbecho_es = new SliderW(51, 148, 100, 10, "E.S.");
  rbecho_es->type(5);
  rbecho_es->box(FL_FLAT_BOX);
  rbecho_es->color((Fl_Color)178);
  rbecho_es->selection_color((Fl_Color)62);
  rbecho_es->labeltype(FL_NORMAL_LABEL);
  rbecho_es->labelfont(0);
  rbecho_es->labelsize(10);
  rbecho_es->labelcolor(FL_BACKGROUND2_COLOR);
  rbecho_es->maximum(127);
  rbecho_es->step(1);
  rbecho_es->textcolor(FL_BACKGROUND2_COLOR);
  rbecho_es->callback((Fl_Callback*)cb_rbecho_es);
  rbecho_es->align(Fl_Align(FL_ALIGN_LEFT));
  rbecho_es->when(FL_WHEN_CHANGED);
} // SliderW* rbecho_es
{ rbecho_angle = new SliderW(51, 162, 100, 10, "Angle");
  rbecho_angle->type(5);
  rbecho_angle->box(FL_FLAT_BOX);
  rbecho_angle->color((Fl_Color)178);
  rbecho_angle->selection_color((Fl_Color)62);
  rbecho_angle->labeltype(FL_NORMAL_LABEL);
  rbecho_angle->labelfont(0);
  rbecho_angle->labelsize(10);
  rbecho_angle->labelcolor(FL_BACKGROUND2_COLOR);
  rbecho_angle->minimum(-64);
  rbecho_angle->maximum(64);
  rbecho_angle->step(1);
  rbecho_angle->textcolor(FL_BACKGROUND2_COLOR);
  rbecho_angle->callback((Fl_Callback*)cb_rbecho_angle);
  rbecho_angle->align(Fl_Align(FL_ALIGN_LEFT));
  rbecho_angle->when(FL_WHEN_CHANGED);
} // SliderW* rbecho_angle
position(X, Y);
end();
}
