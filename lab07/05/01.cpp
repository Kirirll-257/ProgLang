#include <iostream>
int main() {
   {int a = 1, b = 3;
   a,b = b,a;
   std::cout << a << " " << b << std::endl;}
   
   {int a = 1, b = 3, c;
   c = a;
   a = b;
   b = c;
   std::cout << a << " " << b << std::endl;}
}