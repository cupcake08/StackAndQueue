void reverseStack(stack<int> &in,stack<int> &extra){
    if(in.size()<=1) return;
    int x = in.top();
    in.pop();
    reverseStack(in,extra);
    while(!in.empty()) extra.push(in.top()),in.pop();
    in.push(x);
    while(!extra.empty()) in.push(extra.top()),extra.pop();
}
