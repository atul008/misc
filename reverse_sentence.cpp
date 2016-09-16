#include <bits/stdc++.h>
using namespace std;

void reverse(char* begin,char* end){
    char temp;
    while(begin < end){
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

void reverse_sentence(char *str){
    char *begin = str,*end=str;
    while(*end != '\0'){
        end++;
        if(*end == '\0'){
            reverse(begin,end-1);
        }else if(*end ==' '){
            reverse(begin,end-1);
            begin = end+1;

        }

    }

reverse(str,end-1);
}


int main(){
    char str[] = "I am a good boy";
    char *s = str;
    reverse_sentence(s);
    printf("%s",str);

}
