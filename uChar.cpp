#include<iostream>
#include<map>
#include<string.h>
using namespace std;

int main(){

    string s = "abcd";
    map<char,int> charCount;
    for(int i = 0;i< s.length();i++){
        if(charCount[s[i]] >=1 ){
            cout << "String doesnot contain unique characters .\n" ;
            return 0;
        }
        charCount[s[i]]++;
    }
    cout << "characters are unique.\n";
    return 0;
}
