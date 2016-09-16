#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> arr;
    arr.push_back('a');
    arr.push_back('b');
    arr.push_back('c');
    arr.push_back('d');
    arr.push_back('e');
    arr.push_back('f');
    unsigned int m = static_cast<unsigned int>(1 << arr.size());
    for(unsigned int i = 0;i<m;i++){

        unsigned int k = 1,c = 1;
        vector<char> temp;

        while(k <= m){
            if((k&i) != 0){
                temp.push_back(arr[c-1]);
            }
            c++;
            k = k << 1;
        }

        for(int j = 0;j< temp.size();j++){
            cout << temp[j] << " ";
        }
        cout << endl;

    }
return 0;
}
