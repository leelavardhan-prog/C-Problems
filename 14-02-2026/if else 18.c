#include <stdio.h>
int main() {
    int price;
    scanf("%d",&price);
    if(price>=499){
        printf("free delivery");
    }
    else{
        printf("delivery charges applied");
    }
    return 0;
}