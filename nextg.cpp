#include <bits/stdc++.h>
using namespace std;

void nextg(int n){
    stringstream ss;
    ss << n;
    string arr;
    ss >> arr;
    int f =0;
    int i;
    for( i = arr.length()-2;i>=0;i--){
        if(arr[i] < arr[i+1]){
            f =1;
            break;
        }
    }

    if(f == 1){
        int index= i+1;
        for (int  j = i+2;j<arr.length();j++){
            if(arr[j] > arr[i] && arr[j] < arr[index])
                index = j;
        }

        swap(arr[i],arr[index]);
        sort(arr.begin()+i+1,arr.end());

        cout << arr << endl;
    }else{
        cout << "not possible " << endl;
    }

}




int main(){
    int a = 12345;
    nextg(a);
    return 0;
}
