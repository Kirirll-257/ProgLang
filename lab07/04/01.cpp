#include <iostream>
int main(){
  {int x = 1, y = 1;
   (++x) = y;
   std::cout << x;}
 
  {int x = 1, y = 1;
   (x++) = y;
   std::cout << x;}
}