#pragma once
#include<cmath>
#include<iostream>
class point
{
public:
    int x,y;
    point operator+(const point& x1) const;// оператор чтобы пользоваться плюсом 
};
class rhombus
{
public:
    point A,
    B,
    C,
    mid,
    D;
public:
    rhombus(point a,point b,point c);
 void middle();
 void coor4(); 
};