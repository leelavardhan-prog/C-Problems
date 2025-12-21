#include <stdio.h>
int main() {
     int a;
     scanf("%d",&a);
     if(a>=40){
        printf("Student Pass");
     }
    else if(a<40){
        printf("Student Fail");
    }
    else
    printf("Invalid input");
    return 0;
}