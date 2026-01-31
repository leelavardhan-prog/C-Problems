#include <stdio.h>
#include<string.h>
int main() {
    char ch[50];
    char ch1[50];
    fgets(ch,50,stdin);
    fgets(ch1,50,stdin);
    printf("%s",strcpy(ch1,ch));
    return 0;
}