#include <stdio.h>
int main() {
    int temp;
    scanf("%d",&temp);
    if(temp<=15){
        printf("cold");
    }
    else if(temp>15&&temp<=30){
        printf("moderate");
    }
    else if(temp>30){
        printf("Hot");
    }
    
    return 0;
}