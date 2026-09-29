#include <iostream>
int main(){
   int x = 1;
   int y = 0;
   int z = 1;
   if ((x == y) + (x == z) == true) {
   std::cout << 1;
   } else {
   std::cout << -1;
   }
   return 0;
}