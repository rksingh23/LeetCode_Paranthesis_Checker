#include "src/lib/solution.h"
#include <iostream>
#include<vector>

int main() 
{
  Check s;
  std::string s1 = "(";
  std::cout << s1 << std::endl;
  std::cout<<((s.CheckValidExpression(s1))?"true":"false")<<std::endl;

  std::string s2 = "()[]{}";
  std::cout << s2 << std::endl;
  std::cout<<((s.CheckValidExpression(s2))?"true":"false")<<std::endl;

  std::string s3 = "(]";
  std::cout << s3 << std::endl;
  std::cout<<((s.CheckValidExpression(s3))?"true":"false")<<std::endl;

  std::string s4 = "[[]])";
  std::cout << s4 << std::endl;
  std::cout<<((s.CheckValidExpression(s4))?"true":"false")<<std::endl;
    
  std::string s5 = "(([][)]";
  std::cout << s5 << std::endl;
  std::cout<<((s.CheckValidExpression(s5))?"true":"false")<<std::endl;

  return 0;
}