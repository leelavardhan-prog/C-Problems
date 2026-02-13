#include<stdio.h>
int main(){
    int employee,experience,salary,totalsalary;
    scanf("%d",&employee);
    scanf("%d",&experience);
    switch(employee){
        case 1:
         salary=50000;
        if(experience>=3){
        totalsalary=salary+experience*5000;
        printf("%d",totalsalary);
        }
        else{
            printf("%d",salary);
        }
        break;

        case 2:
        salary=35000;
        if(experience>=3){
           totalsalary=salary+experience*5000;
            printf("%d",salary);
        }
        else{
            printf("%d",salary);
        }
        break;
        default:
        printf("invalid input");

    }
    return 0;
}