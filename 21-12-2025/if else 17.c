#include <stdio.h>
int main() {
    int cost_price,selling_price;
    scanf("%d",&cost_price);
    scanf("%d",&selling_price);
    if(selling_price>cost_price){
        printf("Profit");
    }
    else{
        printf("loss");
    }
    return 0;
}