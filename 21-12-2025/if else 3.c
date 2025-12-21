#include <stdio.h>
int main() {
     int a;
     scanf("%d",&a);
     if(a>=18){
        printf("Eligible for vote");
     }
    else if(a<18){
        printf("Not Eligible for vote");
    }
    else
    printf("Invalid input");
    return 0;
}