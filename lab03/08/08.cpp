#include <iostream>
int main(){
   int x = 1;
   int y = 1;
   int z = 0;
   if ((x == y) + (x == z) == true) {
   std::cout << 1;
   } else {
   std::cout << -1;
   }
   return 0;
}