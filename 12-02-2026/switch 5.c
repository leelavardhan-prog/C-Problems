#include <stdio.h>
int main() {
    int plan,recharge,payment;
    scanf("%d",&plan);
    scanf("%d",&recharge);
    scanf("%d",&payment);
    switch(plan){
        case 1:
        if(payment==11||payment==12){
            recharge=recharge-20;
            printf("%d",recharge);
        }
        else{
            printf("%d",recharge);
        }
        break;
        case 2:
        if(payment==11||payment==12){
            recharge=recharge-20;
            printf("%d",recharge);
        }
        else{
            printf("%d",recharge);
        }
        break;
        default:
        printf("invalid input");
    }
    return 0;
}