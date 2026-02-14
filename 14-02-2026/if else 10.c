#include <stdio.h>
int main() {
    int pin;
    scanf("%d",&pin);
    if(pin>3){
        printf("account locked");
    }
    else if(pin<=3&&pin>=1){
        printf("login allowed");
    }
    else{
        printf("invalid input");
    }
    
    return 0;
}