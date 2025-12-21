#include <stdio.h>
int main() {
   int bill;
   float discount,final_bill;
    scanf("%d",&bill);
    if(bill>=5000){
        discount = bill*10.0/100;
        final_bill=bill-discount;
        printf("%f",final_bill);
    }
    else{
        discount = bill*5.0/100;
        final_bill=bill-discount;
        printf("%f",final_bill);
    }
    return 0;
}