#include <stack>
int countBracketReversals(string input) {
    int n = input.length();
    if(n&1) return -1;
    stack<int> s;
    for(auto &x:input) x == '{' ? s.push(x) : ((!s.empty() && s.top() == '{') ? s.pop() : s.push(x));
    int cnt=0;
    while(!s.empty()){
        int c1 = s.top();
        s.pop();
        int c2 = s.top();
        s.pop();
        (c1 == c2) ? cnt++ : cnt+=2;
    }
    return cnt;
}
