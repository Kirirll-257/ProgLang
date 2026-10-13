#include <iostream>
#include <cmath>
int main(){
int n = 16384;
long double s = powl(2, n);
std::cout << std::fixed << s << std::endl;
}