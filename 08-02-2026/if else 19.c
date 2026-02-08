#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>=48&&n<=57){
        printf("it is a digit ");
    }
    else{
        printf("not a digit");
    }
    
    return 0;
}