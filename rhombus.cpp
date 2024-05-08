#include "rhombus.h"
point point::operator+(const point & x1) const
{
 return  point{ this->x + x1.x, this->y + x1.y };
}
rhombus::rhombus(point a,point b, point c)//присваиваем значения 
{
    A = a;
    B = b;
    C = c;
}
void rhombus::middle()//ищем середину ромба 
{
    mid.x = B.x;
    mid.y = A.y;
}
void rhombus::coor4()//находим координаты оставшихся вершин
{
    D.x = B.x;
    D.y = abs(mid.y - (B.y - mid.y));
}