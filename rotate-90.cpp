#include <bits/stdc++.h>
#define N 4
using namespace std;

void reverse(int *arr,int n){
    for(int i =0;i<n/2;i++){
        swap(arr[i],arr[n-1-i]);
    }
}

void rotateby90(int arr[][N],int n){

    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i = 0;i<n ;i++){
        reverse(arr[i],n);
    }

}


int main(){

    int arr[4][4] = {{1,2,3,4}, {5,6,7,8} ,{9,10,11,12},{13,14,15,16}};

    for(int i =0;i<4;i++) {
        for(int j =0;j<4;j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    rotateby90(arr,4);
    for(int i =0;i<4;i++) {
        for(int j =0;j<4;j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}
