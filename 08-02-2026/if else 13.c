#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("Uppercase letters");
    }
    else {
        printf("lowercase letters");
    }
    
    return 0;
}