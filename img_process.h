#ifndef IMG_PROCESS_H
#define IMG_PROCESS_H

#define NO_WHITE 10
#define ALL_WHITE 11
#define LEFT 12
#define RIGHT 13
#define RED 14


void set_threshold();
bool check_red();
double quadrant2_turn();
double quadrant3_turn();
bool wait_for_white_centre();

#endif
