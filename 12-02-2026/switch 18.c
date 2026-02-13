#include<stdio.h>
int main(){
    int attempt,marks;
    scanf("%d",&attempt);
    scanf("%d",&marks);
    switch(attempt){
        case 1:
        if(marks>=80){
            printf("excellent");
        }
        else{
            printf("not qualified");
        }
        break;
        case 2:
        if(marks>=60){
            printf("good");
        }
        else{
            printf("not qualified");
        }
        break;
        case 3:
        printf("needs improvement");
        break;
        default :
        printf("invalid input");
    }
    return 0;
}