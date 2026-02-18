#include <stdio.h>
int main() {
    int salary,absents,finalsal;
    scanf("%d",&salary);
    scanf("%d",&absents);
    finalsal=salary-(absents*100);
    printf("Final Salary : %d",finalsal);
    return 0;
}