#include <stdio.h>
int main() {
    int wl;
    scanf("%d",&wl);
    if(wl>90){
        printf("over flow warning");
    }
    else if(wl<=90&&wl>=0){
        printf("safe level");
    }
    else{
        printf("invalid input");
    }
    
    return 0;
}