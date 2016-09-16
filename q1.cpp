#include<bits/stdc++.h>
using namespace std;

int main(){
    string exp("1+2*3 ");
    int k = 0;

    while(exp[k] == ' ')
        k++;

    int res = exp[k]-'0',op = -1;

    for(int i = 1 ;i < exp.size();i++){
        if(exp[i] == ' ')
            continue;
        if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/'){
            i++;
            if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/'){
                cout << "-1" << endl;
                return 0;
            }else{
                switch(exp[i-1]){
                case '+':
                        res += exp[i]-'0';
                    break;

                case '-':
                    res -= exp[i]-'0';
                    break;

                case '*':
                    res *= exp[i]-'0';
                    break;

                case '/':
                    res /= exp[i]-'0';
                    break;
                }

            }


        }
    }
    cout << res << endl;
    return 0;
}
