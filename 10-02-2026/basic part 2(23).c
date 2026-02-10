#include <stdio.h>
int main() {
    int n,positive,negative,zero;
    scanf("%d",&n);
    if((n>0)?(n==0)?zero:positive:negative){
        printf("positive");
    }
    else{
        printf("negative");
    }
    
    return 0;
}