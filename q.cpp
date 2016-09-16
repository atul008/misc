#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t,n,m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector< pair<int,int> > q(m);
        int arr[n][n];
        for(int i=0;i<m;i++) cin >> q[i].first >> q[i].second;
        for(int i =0;i<n;i++) for(int j =0;j<n;j++) arr[i][j] = 0;

        for(int k=0;k<m;k++)
        {
            //row and column
            int x = q[k].first , y = q[k].second;
            for(int i = 0;i<n;i++)
            {
                arr[x][i] = 1;
                arr[i][y] = 1;
            }
            // left diagonal
            int i= x ,j = y; while(i>0 && j>0) arr[--i][--j] = 1;
            i = x,j=y; while(i<n && j<n)  arr[++i][++j] = 1;
            //right diagonal
            i = x,j=y; while(i>0 && j<n) arr[--i][++j] = 1;
            i = x,j=y; while(i<n && j>0) arr[++i][--j] = 1;
        }

        int ans =0;
        for(int i=0;i<n;i++) for(int j=0;j<n;j++)
                if(arr[i][j]==0)
                {
                    int count =0;
                    for(int k=0;k<m;k++)
                    {
                        int x =q[k].first,y =  q[k].second;
                        if((x == i+1 && (y == j+2 || y == j-2 )) || (x == i-1 && (y == j+2 || y == j-2 )) ||
                           (x == i+2 && (y == j+1 || y == j-1 )) || (x == i-2 && (y == j+1 || y == j-1 )) )
                            count++;
                           if(count == 2) break;
                    }
                    if(count == 2) ans++;
                }
        cout << ans << endl;
    }
return 0;
}

