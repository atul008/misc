#include <bits/stdc++.h>
using namespace std;
void foo(int **ptr){
    **ptr = 20;
}


int main(){
    int a;
    a = 10;
    int *p = &a;
    foo(&p);
    cout << a << endl;

}
