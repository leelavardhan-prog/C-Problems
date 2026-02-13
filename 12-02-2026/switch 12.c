#include<stdio.h>
int main(){
    int vehicletype,trip;
    scanf("%d",&vehicletype);
    scanf("%d",&trip);
    switch(vehicletype){
        case 1:
        if(trip==1){
            printf("100");
        }
        else if(trip>=2){
            printf("800 \nmonthly pass");
        }
        else{
            printf("invalid input");
        }
        break;

        case 2:
        printf("%d\n",240*trip);
        break;
        
        default :
        printf("invalid input");
    }
    return 0;
}