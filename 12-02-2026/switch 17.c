#include<stdio.h>
int main(){
    int vehicletype,charge;
    scanf("%d",&vehicletype);
    scanf("%d",&charge);
    switch(vehicletype){
        case 1:
        printf("%d",charge*10);
        break;
        case 2:
        printf("%d",charge*20);
        break;
        default :
        printf("%d",charge*20);

    }
    return 0;
}