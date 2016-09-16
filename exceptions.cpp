#include<bits/stdc++.h>
using namespace std;

int main(){

    try{
        int *arr = (int*) malloc(1*sizeof(int));
        cout << arr[10000] << endl;
        cout << "hello" << endl;
        throw 5;
    }catch(const char* e){
        cout << e << endl;
    }catch(...){
        cout << "hoo" << endl;
    }
return 0;
}
