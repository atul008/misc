#include<stdio.h>
int main(){
    int n,m,t,i,degree[102],count,j,flag2,a,b,flag,adj[102][102];
    scanf("%d",&t);
    while(t--){
        flag=0;
        flag2=0;

        for(i=0;i<102;i++){
            degree[i]=0;
            for(j=0;j<102;j++)
                adj[i][j]=0;
        }

        scanf("%d%d",&n,&m);

        for(i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            adj[a][b]=1;
            adj[b][a]=1;

        }

        if(n % 2 == 1)
            printf("NO\n");
        else if(m < n/2)
            printf("NO\n");
        else{
                for(i=1;i<=n;i++){
                    for(j=1;j<=n;j++){
                        if(adj[i][j]>0)
                            degree[i]++;
                    }
                }

                for(i=1;i<=n;i++){
                    if(degree[i]<1){
                        flag=1;
                        break;
                    }
                }
                if(flag == 1){
                    printf("NO\n");
                } else{

                    for(i=1;i<=n;i++){
                        count=0;
                        if(degree[i]>1){

                            for(j=1;j<=n;j++){
                                if(adj[i][j]>0 && degree[j]==1){
                                        count++;
                                        if(count>1)
                                            break;
                                }
                            }
                        }

                        if(count>1){
                            flag2=1;
                            break;
                        }
                    }
                    if(flag2 == 1)
                        printf("NO\n");
                    else
                        printf("YES\n");
                }
        }
    }
    return 0;
}
