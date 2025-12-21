#include <stdio.h>
int main() {
    int a,b,c,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum=a+b+c;
    printf("%d\n",sum);
    if(sum==180){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}