#include <bits/stdc++.h>
using namespace std;

void check(string s){
    stack<char> stk;
    for(int i = 0;i<s.length();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            stk.push(s[i]);
        }else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
            char c = stk.top();
            stk.pop();
            if ( (s[i] == ')' && c != '(') || (s[i] == '}' && c != '{') || (s[i] == ']' && c != '[')){
                cout << "unbalanced" << endl;
                return;
            }
        }
    }

    if(stk.size() > 0){
        cout << "unbalnced " << endl;
    }else{
        cout << "balanced " << endl;
    }



}

int main(){
    string exp = "{(){}[aaaa]";
    check(exp);
    return 0;
}
