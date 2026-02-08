#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>99&&n<1000){
        printf("Three-digit number");
    }
    else{
        printf("give valid input");
    }
    
    return 0;
}