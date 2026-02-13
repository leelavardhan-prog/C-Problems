#include <stdio.h>
int main() {
    int clase,age;
    int cost;
    scanf("%d",&clase);
    scanf("%d",&age);
    switch(clase){
        case 1:
            if(age<12){
                cost=300*0.5;
                printf("%d",cost);
            }
            else if(age>60){
                cost=300*0.67;
                printf("%d",cost);
            }
            break;
        case 2:
        if(age<12){
             cost=1000*0.5;
            printf("%d",cost);
        }
        else if(age>60){
            cost=1000*0.67;
            printf("%d",cost);
        }
        break;
        default:
        printf("invalid input");
    }
    
    return 0;
}