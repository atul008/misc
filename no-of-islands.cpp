#include <bits/stdc++.h>

#define ROW 5
#define COL 5
using namespace std;

void DFS(int arr[][COL],int r,int c,int vis[][COL]){
    vis[r][c] = 1;
    int moves[8][2] = {{1,0},{-1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1} };
    for(int k=0;k<8;k++){
        int nr = r + moves[k][0],nc = c + moves[k][1];
        if((nr < ROW && nr >= 0) && (nc < COL && nc >= 0) && (arr[nr][nc]== 1 )&& (!vis[nr][nc])){
            DFS(arr,nr,nc,vis);
        }
    }
}

int no_of_islands(int arr[][COL]){
    int vis[ROW][COL];
    memset(vis,0,sizeof(vis));
    int count = 0;
    for(int i=0;i<ROW;i++)
        for(int j=0;j<COL;j++){
            if(arr[i][j]==1 && !vis[i][j]){
                DFS(arr,i,j,vis);
                count++;
            }
        }
    return count;
}

int main(){
    int arr[ROW][COL] =   { {1, 1, 0, 0, 0},
                        {0, 1, 0, 0, 1},
                        {1, 0, 0, 1, 1},
                        {0, 0, 0, 0, 0},
                        {1, 0, 1, 0, 1} } ;
 cout << no_of_islands(arr) << endl;
}
