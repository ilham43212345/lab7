#pragma once
#include "rhombus.h"
class new_rhombus : public rhombus
{
public:

 point new_A,
  new_B,
  new_C,
  new_D,
  new_mid;
public:
 new_rhombus(point a, point b,point c);
 void D_coor();
 void moving(point number);
 void return_coor();
};