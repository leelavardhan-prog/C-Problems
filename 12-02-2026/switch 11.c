#include<stdio.h>
int main(){
    int plan;
    float dataUsed;
    scanf("%d",&plan);
    scanf("%f",&dataUsed);
    switch(plan){
        case 1:
        if(dataUsed<=1){
            printf("normal speed");
        }
        else if(dataUsed>1){
            printf("speed reduced");
        }
        else{
            printf("invalid input");
        }
        break;
        
        case 2:
        if(dataUsed<=2){
            printf("normal speed");
        }
        else if(dataUsed>2){
            printf("Extra Charges Applied");
        }
        else{
            printf("invalid input");
        }
        break;
        default:
        printf("Extra Charges Applied");
    }
    return 0;
}