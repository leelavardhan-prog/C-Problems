#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>8){
        printf("strong password");
    }
    else{
        printf("weak password");
    }
    
    return 0;
}