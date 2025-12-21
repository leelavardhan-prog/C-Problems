#include <stdio.h>
int main() {
    int e_bill,cost;
    scanf("%d",&e_bill);
    if(e_bill<=100){
        cost=1*e_bill;
        printf("%d",cost);
    }
    else{
        cost=2*e_bill;
        printf("%d",cost);
    }
    return 0;
}