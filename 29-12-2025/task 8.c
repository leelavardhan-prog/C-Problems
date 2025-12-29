#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("Upper case");
    }
    else if(ch>='a'&&ch<='z'){
        printf("Lower case");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}