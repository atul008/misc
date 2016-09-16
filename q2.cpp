#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;

    arr.push_back(-2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(-1);
    arr.push_back(-6);
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(1);
    int k =-1;
    for(int i = 0;i< arr.size();i++){
        if(arr[i] < 0){
            swap(arr[++k],arr[i]);
        }
    }

    int r = k+1;
    int l = 0;
    while(l < r && arr[l] < 0 && r < arr.size()){
        swap(arr[l],arr[r]);
        l += 2;
        r++;
    }

    for(int i = 0;i<arr.size();i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

