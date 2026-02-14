#include <stdio.h>
int main() {
    int balance;
    scanf("%d",&balance);
    if(balance>=1000){
        printf("sufficient balance");
    }
    else if(balance<1000){
        printf("low balance");
    }
    else{
        printf("invalid input");
    }
    
    return 0;
}