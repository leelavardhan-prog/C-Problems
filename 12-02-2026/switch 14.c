#include<stdio.h>
int main(){
    int category,age;
    scanf("%d",&category);
    scanf("%d",&age);
    switch(category){
        case 1:
        if(age<=5&&age>=0){
            printf("1500");
        }
        else if(age>5&&age<=20){
            printf("2500");
        }
        else{
            printf("invalid age");
        }
        break;

        case 2:
        if(age<=5&&age>=0){
            printf("4000");
        }
        else if(age>5&&age<=20){
            printf("6000");
        }
        else {
            printf("invalid age");
        }
        break;
        default:
        printf("invalid input");
    }
    return 0;
}