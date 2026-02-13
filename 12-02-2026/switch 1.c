#include<stdio.h>
int main(){
    int connection,unit;
    scanf("%d",&connection);
    scanf("%d",&unit);
    switch(connection){
        case 1:
        if(unit<=100){
            printf("%d",unit*3);
        }
        else if(unit>100){
            printf("%d",((unit-100)*5 + (100 * 3))-80);
        }
        else{
            printf("invalid input");
        }
        break;


        case 2:
        if(unit<=100){
            printf("%d",unit*7);
        }
        else if(unit>100){
            printf("%d",(unit-100)*10+(100*7));
        }
        else{
            printf("invalid input");
        }
        break;
        default:
        printf("invalid input");
    }
    return 0;
}