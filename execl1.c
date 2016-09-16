#include <stdio.h>
int main(){

  if( execl("/bin/bash","bash","-c","/home/dexter/Desktop/codes/test",(char*)0) < 0){
    printf("error\n");

  }
return 0;
}

