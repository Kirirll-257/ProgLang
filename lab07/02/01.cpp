#include <iostream>
int main() {
{int x =  1, y = 2, z = 0;
z=z+2*(x += 1)+3*(y++);
std::cout << z << " " << x << " " << y << std::endl;}

{int x = 1, y = 2, z = 0;
z = z + 2 * (++x) + 3 * (y++);
std::cout << z << " " << x << " " << y<< std::endl;}
}
