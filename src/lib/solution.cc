#include "solution.h"
#include <iostream>
#include <bits/stdc++.h>

bool Check::CheckValidExpression(std::string &a)
{
  std::stack<char> stack1;
  if(a.length() == 0) return true;                                                       //O(1)
  for(auto i:a)                                                                          // O(n)
  {
      if (((i=='[')||(i=='{')||(i=='('))) stack1.push(i);                                //if - O(1)  .push - O(1)
      else
      {
          if(!(stack1.empty()))                                                          // O(1)
          {
              if      ((i ==')') && (stack1.top() == '('))   stack1.pop();               //O (1)
              else if ((i =='}') && (stack1.top() == '{'))   stack1.pop();
              else if ((i ==']') && (stack1.top() == '['))   stack1.pop();
               
               else if ((i ==')') && (stack1.top() != '('))   return false;
               else if ((i =='}') && (stack1.top() != '{'))   return false;
               else if ((i ==']') && (stack1.top() != '['))   return false;
          }
          else
          {
              if      (i ==')')   return false;
              else if (i =='}')   return false;
              else if (i ==']')   return false;
          }
      }
  }
  if(!(stack1.empty())) return false;                                                   //O(1)

  return true;
}

//Worst Case Senario is O(n))