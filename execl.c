#include <stdio.h>
int main(){

  if( execl("./test","test",(char*)0) < 0){
    printf("error\n");

  }


return 0;
}
