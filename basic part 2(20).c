#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int max;
    max=(a>b)?a:b;
    if(max==a||max==b){
        printf("%d",max);
    }
    
    return 0;
}