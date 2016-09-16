# include <stdio.h>
# include <string.h>

char stack[500];
int top = -1;

void push(char a){
    stack[++top] = a;
}

char pop(){
    if(pop >=0)
        return stack[top--];
    else
        printf("Stack empty\n");
}

void in_to_post(char* str){

    int l = strlen(str);
    char post[100],c;
    int k = 0;
    for(int i =0 ; i < l ;i++){

         if(str[i] >='a' && str[i] <= 'z'){
            post[k++] = str[i] ;
            printf("Entering %c\n",str[i]);
         }
        else if(str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%'){
                push(str[i]);
                printf("Pushing %c\n",str[i]);
        }

        else if(str[i] == ')'){
            while((c = pop()) !='('){
                    post[k++]  = c;
                    printf("Poping %c\n",c);
            }
        }

    }
    post[k] = '\0';
    printf("Post: %s",post);
}

int main(){
    char str[10] ;
    printf("Enter string : ");
    scanf("%s",str);
    in_to_post(str);
    return 0;
}
