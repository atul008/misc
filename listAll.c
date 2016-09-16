#include <sys/types.h>
#include <dirent.h>
#include<stdio.h>
int main(int argc,char *argv[]){

//    DIR *dp;
  //  struct dirent *dirp;
    if(argc != 2)
        printf("Less arguments\n");
    //if((dp = opendir(argv[1])) == NULL)
        printf("Program name: %s \n your option: %s\n",argv[0],argv[1]);
    //while((dirp = readdir(dp)) != NULL)
    //    printf("%s\n",dirp->d_name);
    //closedir(dp);
    return 0;

}
