#include <stdio.h>
int main() {
    int attendance,marks;
    scanf("%d %d",&attendance,&marks);
    if(attendance>=75){
        if(marks>=75){
            printf("distinction");
        }
        else if(marks>=50&&marks<75){
            printf("Pass");
        }
        else if(marks<50){
            printf("Fail");
        }
        else{
            printf("invalid input");
        }
    }
    else if(attendance<75){
        printf("Fail");
    }
    else{
        printf("invalid input");
    }
    return 0;
}