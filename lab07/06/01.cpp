#include <iostream>
int main() {
  {std::string s;
  for (int i=0; i<1000000; i++)
     s += 'a';
  std::cout << s.size() << std::endl;}

  {std::string s;
  for (int i=0; i<1000000; i++)
     s = s + 'a';
  std::cout << s.size();}
}