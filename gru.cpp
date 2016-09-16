#include<iostream>
using namespace std;
void solve(char **arr,int n,int m){


}

int main(){
    int t,n,m,wCount;
    char arr[1001][1001];
    vector< pair<int,int> > pos,trapped;
    pair<int,int> temp;
    vector< pair<int,int> >::iterator it;
    cin >> t;
    while(t--){
        cin >> n >> m;
        wCount = 0;
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                cin >> arr[i][j];
            }
        }

        for(int i=1;i<n-1;i++){
            for(int j =1;j<m-1;j++){
                    if(arr[i][j]=='W'){
                        if(arr[i-1][j] == 'B' && arr[i][j-1] == 'B' && arr[i+1][j] == 'B' && arr[i][j+1] == 'B')
                            temp.first = i;
                            temp.second = j;
                            trapped.push_back(temp);
                    }
            }
        }

        if(trapped.size() <=2 ){
            cout<< "YES" << endl;
        }else{




        }


        cout << solve(arr,n) << endl;

    }
    return 0;
}

