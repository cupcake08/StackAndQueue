//for complete problem refer to coding ninjas platform

#include <stack>
int* stockSpan(int *price, int size)  {
	int *span=new int[size];
  stack<int> s;
  span[0]=1;
  s.push(0);
  for(int i=1;i<size;i++)
  {
    while(!s.empty() && price[i]>price[s.top()])
    {
      s.pop();
    }
    if(s.empty())
    {
      span[i]=i+1;
    }else
    {
      span[i]=i-s.top();
    }
    s.push(i);
  }
  return span;
}
