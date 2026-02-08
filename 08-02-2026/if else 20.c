#include <stdio.h>
int main() {
    int a,b,min;
    scanf("%d %d",&a,&b);
    min=(a<b)?a:b;
    if(min==a||min==b){
        printf("%d",min);
    }
    
    return 0;
}