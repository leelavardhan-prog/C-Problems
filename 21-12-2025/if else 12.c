#include <stdio.h>
int main() {
     int salary,bonus_salary;
     scanf("%d",&salary);
     if(salary>=20000){
        bonus_salary=salary+2000;
        printf("%d",bonus_salary);
     }
     else{
        bonus_salary=salary+1000;
        printf("%d",bonus_salary);
     }
     return 0;
}
