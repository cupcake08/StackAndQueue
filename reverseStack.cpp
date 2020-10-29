//for complete problem refer to coding ninjas platform

void reverseStack(stack<int> &input, stack<int> &extra) {
    if(input.size()==0 || input.size()==1)
    {
      return;
    }
    int x=input.top();
    input.pop();
    reverseStack(input,extra);
    while(!input.empty())
    {
      extra.push(input.top());
      input.pop();
    }
    input.push(x);
    while(!extra.empty())
    {
      input.push(extra.top());
      extra.pop();
    }
}
