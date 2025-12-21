#include <stdio.h>
int main() {
     int a,b;
     scanf("%d",&a);
     scanf("%d",&b);
     if(a>b){
        printf("a is greater : %d",a);
     }
    else if(a<b){
        printf("b is greater : %d",b);
    }
    else
    printf("both are equel");
    
    return 0;
}