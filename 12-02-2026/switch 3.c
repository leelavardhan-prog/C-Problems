#include <stdio.h>
int main() {
    int n,balance,withdraw;
    scanf("%d %d %d",&n,&balance,&withdraw);
    switch(n){
        case 1:
        printf("savings account\n");
        if(balance>withdraw){
            printf("transaction successful");
        }
        else{
            printf("limit exceed");
        }
        break;
        case 2:
        printf("current account\n");
        if(balance>=withdraw&&withdraw<=5000){
            printf("transaction successful");
        }
        else{
            printf("limit exceed");
        }
        break;
        default:
        printf("invalid input");
    }
    
    return 0;
}