#include<stdio.h>
#include<malloc.h>
#include <stdlib.h>
int main(int argc, char** argv){
    int  a,i;
    printf("argc:%d argv:%s\n",argc,argv[1]);
    for(i=0;i<20;i++){
    a=rand()%6;
    printf(" %d",a+5);
    }
    scanf("%d",&a);
    printf("a: %d\n",a);
    scanf("%d",&a);

return 0;
}
