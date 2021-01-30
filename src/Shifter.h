/*
  rakarrack - a guitar effects software

  PitchShifter.h  -  Shifterr definitions
  Copyright (C) 2008-2010 Josep Andreu
  Author: Josep Andreu

 This program is free software; you can redistribute it and/or modify
 it under the terms of version 2 of the GNU General Public License
 as published by the Free Software Foundation.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License (version 2) for more details.

 You should have received a copy of the GNU General Public License
 (version2)  along with this program; if not, write to the Free Software
 Foundation,
 Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/

#ifndef SHIFTER_H
#define SHIFTER_H

#include <vector>
#include "Effect.h"
#include "smbPitchShift.h"
#include "Resample.h"


#define IDLE 0
#define UP   1
#define WAIT 2
#define DOWN 3

const int C_SHIFTER_PARAMETERS = 10;

enum Shifter_Index
{
    Shifter_DryWet = 0,
    Shifter_Pan,
    Shifter_Gain,
    Shifter_Attack,
    Shifter_Decay,
    Shifter_Threshold,
    Shifter_Interval,
    Shifter_Shift,
    Shifter_Mode,
    Shifter_Whammy
};

class Shifter : public Effect
{

public:
    Shifter (long int Quality, int DS, int uq, int dq, double sample_rate, uint32_t intermediate_bufsize);
    ~Shifter ();
    void out (float *efxoutl, float *efxoutr);
    void setpreset (int npreset);
    void changepar (int npar, int value);
    int getpar(int npar);
    void cleanup();

#ifdef LV2_SUPPORT
    void lv2_update_params(uint32_t period);
#endif // LV2
    
    void initialize();
    void clear_initialize();
    void applyfilters (float * efxoutl);
    void adjust(int DS, double sample_rate);
    
    /* Change quality */
    std::vector<int> save_parameters();
    void reset_parameters(std::vector<int> parameters);

    long int hq;
    float *outi;
    float *outo;

private:

    void setvolume (int Pvolume);
    void setpanning (int Ppan);
    void setinterval (int Pinterval);
    void setgain (int Pgain);

    int DS_state;
    uint32_t PERIOD;
    double fSAMPLE_RATE;
    int Pvolume;
    int Pgain;
    int Ppan;
    int Pinterval;
    int Pupdown;
    int Pmode;
    int Pattack;
    int Pdecay;
    int Pthreshold;
    int Pwhammy;
    int state;
    int nPERIOD;
    int nSAMPLE_RATE;
    float nRATIO;
    long window;

    double u_up;
    double u_down;
    float nfSAMPLE_RATE;
    float env, t_level, td_level, tz_level;
    float a_rate,d_rate,tune, range, whammy;
    float panning;
    float gain;
    float interval;
    float *templ, *tempr;

    Resample *U_Resample;
    Resample *D_Resample;


    PitchShifter *PS;

};

#endif
