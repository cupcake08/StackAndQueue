//for complete problem refer to coding ninjas platform

#include <stack>
bool isBalanced(string expression)
{
  if(expression[0]=='}' || expression[0]==']' || expression[0]==')')
  {
    return false;
  }
  stack<char> s;
  for(int i=0;i<expression.length();i++)
  {
    if(expression[i]=='{')
    {
      s.push(expression[i]);
    }
    else if(expression[i]=='(')
    {
      s.push(expression[i]);
    }else if(expression[i]=='[')
    {
      s.push(expression[i]);
    }
  }
  for(int i=0;i<expression.length();i++)
  {
    if(expression[i]==')')
    {
      if(s.top()=='(')
      {
        s.pop();
      }else
      {
        return false;
      }
    }
    else if(expression[i]=='}')
    {
      if(s.top()=='{')
      {
        s.pop();
      }else
      {
        return false;
      }
    }else if(expression[i]==']')
    {
      if(s.top()=='[')
      {
          s.pop();
      }else
      {
        return false;
      }
    }
  }
  if(s.empty())
  {
    return true;
  }
  return false;
}