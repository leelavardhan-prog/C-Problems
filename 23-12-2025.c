#include <stdio.h>
int main() {
   int marks;
   scanf("%d",&marks);
   if(marks>=90&&marks<=100){
    printf("A Grade");
   }
   else if(marks>=75&&marks<=89){
    printf("B Grade");
   }
   else if(marks>=50&&marks<=74){
    printf("C Grade");
   }
   else if(marks<50){
    printf("Fail");
   }
    else{
        printf("Invalid Input");
    }
    return 0;
}