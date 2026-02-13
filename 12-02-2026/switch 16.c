#include<stdio.h>
int main(){
    int clase,weight;
    scanf("%d",&clase);
    scanf("%d",&weight);
    switch(clase){
        case 1:
        printf("%d",weight*300);
        break;
        case 2:
        if(weight<=3){
            printf("no charge");
        }
        else if(weight>3){
            printf("%d",(weight-3)*300);
        }
        break;
        default:
        printf("invalid input");
    }
    return 0;
}