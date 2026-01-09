#include <stdio.h>
#include<string.h>
int main(){
    char ch[50];
    scanf("%[^\n]",&ch);
    printf("length is  %d",strlen(ch));
    return 0;
}