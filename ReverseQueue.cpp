//for complete problem refer to coding ninjas platform

void reverseQueue(queue<int> &input)
{
  if(input.size()==0||input.size()==1)
  {
    return;
  }
  int x=input.front();
  input.pop();
  reverseQueue(input);
  input.push(x);
}
