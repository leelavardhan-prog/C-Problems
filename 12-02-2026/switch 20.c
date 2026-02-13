#include<stdio.h>
int main(){
    int category,limit;
    scanf("%d",&category);
    scanf("%d",&limit);
    switch(category){
        case 1:
        if(limit>=1){
            printf("access anytime");
        }
        break;
        case 2:
        if(limit>=9&&limit<=20){
            printf("limited access");
        }
        else{
            printf("access denied");
        }
        break;
        default :
        printf("invalid input");
    }
    return 0;
}