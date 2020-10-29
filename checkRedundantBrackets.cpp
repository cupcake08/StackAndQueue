//for complete problem refer to coding ninjas platform

#include <stack>
bool checkRedundantBrackets(string expression)
{
  stack<char> st;
  for(int i=0;i<expression.length();i++)
  {
    if(expression[i]==')')
    {
      int count=0;
      while(st.top()!='(')
      {
        count++;
        st.pop();
      }
      st.pop();
      if(count==0||count==1)
      {
        return true;
      }
    }else
    {
      st.push(expression[i]);
    }
  }
  return false;
}
