#include <stack>
bool checkRedundantBrackets(string expression) {
	stack<char> st;
    for(auto &c:expression){
        if(c == ')'){
            int cnt=0;
            while(st.top()!='(') cnt++,st.pop();
            st.pop();
            if(cnt == 0 || cnt == 1) return 1;
        }else st.push(c);
    }
    return 0;
}
