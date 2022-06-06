#include "geometry.h"


Point::Point(int x, int y)
{
    p_x = x;
    p_y = y;
}


int Point::get_x(){
    return p_x;
}


int Point::get_y(){
    return p_y;
}