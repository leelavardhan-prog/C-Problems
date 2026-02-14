#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num>=1&&num<=6){
        printf("weakday");
    }
    else if(num==7){
        printf("weakend");
    }
    else{
        printf("invalid input");
    }
    
    return 0;
}