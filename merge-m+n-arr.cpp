#include <bits/stdc++.h>
using namespace std;

#define NA -1

void findNextNonEmpty(int arr[],int& k,int size){
    int i = k+1;
    for(;i<size;i++){
        if(arr[i] != NA){
            k = i;
        }
    }
    if(i == size)
        k = size;
}

void merge(int big[],int small[],int m,int n){
    int size = m+n;
    int j = 0;
    int ne = -1;
    for(int i =0;i<size;i++){
        if(big[i] == NA){
            ne =max(i,ne+1);
            findNextNonEmpty(big,ne,size);
            if(ne >= size || small[j] < big[ne]){
                big[i] = small[j++];
            }else{
                big[i] = big[ne];
                big[ne] = small[j++];
            }
        }else{
            if(small[j] < big[i])
                swap(big[i],small[j]);
        }
    }
}

int main(){
    int big[7] = {2,7,-1,-1,-1,10,-1};
    int small[4] = {5,8,12,14};

    merge(big,small,7,4);
    for(int i = 0;i<7;i++)
        cout << big[i] << " ";
    cout << endl;

    return 0;
}
