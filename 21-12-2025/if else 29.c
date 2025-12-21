#include <stdio.h>
int main() {
   int salary;
   float final_salary;
   scanf("%d",&salary);
   if(salary>=50000){
    final_salary=salary-salary*10/100;
    printf("%f",final_salary);
   }
   else{
    final_salary=salary-salary*0/100;
    printf("%f",final_salary);
   }
    return 0;
}