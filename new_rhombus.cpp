#include "new_rhombus.h"
new_rhombus::new_rhombus(point a, point b,point c) : rhombus(a, b ,c)//передаем наши координаты 
{
 new_A = A;
 new_B = B;
 new_C = C;
 std::cout << "Сохраненные координаты:\n" << "(4,6),(6,10),(8,6)\n";
}
void new_rhombus::D_coor()
{
 new_D = D;
}
void new_rhombus::moving(point number)//сдвигаем нашу фигуру 
{
 new_mid = new_mid + number;
 new_A = new_A + number;
 new_B = new_B + number;
 new_C = new_C + number;
 new_D = new_D + number;
 std::cout << "координаты после сдвига:\n";
 std::cout << "A:" << new_A.x << " " << new_A.y << "\n";
 std::cout << "B:" << new_B.x << " " << new_B.y << "\n";
 std::cout << "C:" << new_C.x << " " << new_C.y << "\n";
 std::cout << "D:" << new_D.x << " " << new_D.y << "\n";
}
void new_rhombus::return_coor()// сбрасываем координаты 
{
 new_A = A;
 new_B = B;
 new_C = C;
 new_D = D;
 new_mid = mid;
 std::cout << "координаты после сброса:\n";
 std::cout << "A:" << new_A.x << " " << new_A.y << "\n";
 std::cout << "B:" << new_B.x << " " << new_B.y << "\n";
 std::cout << "C:" << new_C.x << " " << new_C.y << "\n";
 std::cout << "D:" << new_D.x << " " << new_D.y << "\n";
}