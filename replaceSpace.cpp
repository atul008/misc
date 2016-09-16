#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "My name is Atul";
    vector<char> v;
    for(int i =0;i<s.length();i++){
        if(s[i]== ' '){
            v.push_back('%');
            v.push_back('2');
            v.push_back('0');
        }
        else{
            v.push_back(s[i]);
        }
    }
    for(int i = 0;i< v.size(); i++)
        cout << v[i];
return 0;
}
