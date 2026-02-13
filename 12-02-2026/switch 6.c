#include <stdio.h>
int main() {
    int speed,amount;
    scanf("%d",&amount);
    scanf("%d",&speed);
    switch(speed){
        case 1:
        printf("delivery charge : 50");
        break;
        case 2:
        if(amount>=1000){
            printf("Free delivery charges");
        }
        else{
            printf("delivery charges : 100");
        }
        break;
        default:
        printf("invalid input");
    }

    return 0;
}