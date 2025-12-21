#include <stdio.h>
int main() {
   int age,salary;
   scanf("%d",&age);
   scanf("%d",&salary);
   if(age>=25&&salary>=30000){
    printf("Eligible");
   }
   else
   printf("Not Eligible");

    return 0;
}