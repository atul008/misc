# include <stdio.h>

int main(){

    int x = 10,y;
    y = (x++,++x);
  //  y = (x++, printf("x = %d\n", x), ++x, printf("x = %d\n", x), x++);
  //  printf("%d\n",x);
    printf("%d\n",y);

return 0;

}
