#include <stdio.h>
int main() {
    int attendance;
    scanf("%d",&attendance);
    if(attendance>=75){
        printf("eligible for exam");
    }
    else if(attendance<75&&attendance>=0){
        printf("not eligible");
    }
    else{
        printf("invalid input");
    }
    
    return 0;
}