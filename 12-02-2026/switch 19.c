#include<stdio.h>
int main(){
    int category,travelled;
    scanf("%d",&category);
    scanf("%d",&travelled);
    switch(category){
        case 1:
        if(travelled<=30){
            printf("eligible");
        }
        else{
            printf("eligible with extra fee");
        }
        break;
        case 2:
        if(travelled<=30){
            printf("eligible");
        }
        else{
            printf("not eligible");
        }
        break;
        default :
        printf("invalid distance");
    }
    return 0;
}