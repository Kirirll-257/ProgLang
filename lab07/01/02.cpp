#include <iostream>
int main() {
int x=10, y=3;
std::cout << (x=15, y+=x, x+=y);
}