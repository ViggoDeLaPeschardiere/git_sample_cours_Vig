//
// Created by noama on 12/05/2023.
//

#ifndef GIT_SAMPLE_COURS_VIG_TIR_AUX_BALLONS_H
#define GIT_SAMPLE_COURS_VIG_TIR_AUX_BALLONS_H

#endif //GIT_SAMPLE_COURS_VIG_TIR_AUX_BALLONS_H


#include <allegro.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


typedef struct {
    int x, y;
    int radius;
    int speed_x, speed_y;
    int color;
    int active;
    BITMAP *pokeball;
} Circle;