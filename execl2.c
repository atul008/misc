#include <stdio.h>
#include <string.h>
int main(){
int n = 57,t,i;
char c[30],cmd[30];
    sscanf("./test","%s",cmd);
    sprintf(c,"%d",n);
    strcat(cmd," ");
    strcat(cmd,c);
    //c="56";
    printf("c:%s cmd: %s",c,cmd);

  if((n=fork())==0){
  if( execl("/usr/bin/xterm","xterm","-e","bash","-c",cmd,(char*)0) < 0){
    printf("error\n");
  }
  } else if(n>0){
    printf("parent parent\n");
  }
  else{
  printf("fork error\n") ;
  }
return 0;
}

