#include <iostream>
#include "rhombus.h"
#include "new_rhombus.h"
int main() 
{
 setlocale(LC_ALL,"RU");
 //(7,16,12,20,17,16);
 new_rhombus first({4,6},{6,10}, point{8,6});//начальные координаты 
 first.middle();
 first.coor4();
 first.D_coor();
 first.moving(point{ 1, 1 });//сдвиг
 first.return_coor();//возращаем координаты 
}