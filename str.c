#include <stdio.h>
#include <string.h>
int main(){
    char a[10],b[10];
//    a="grep ";
  //  b=" name";
    sscanf("grep","%s",a);
    //a = "grep";
    strcat(a," name");
    printf("%s\n",a);
    return 0;
}
