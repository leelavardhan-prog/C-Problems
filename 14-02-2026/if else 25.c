#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    if(days>7){
        printf("Fine applied");
    }
    else if(days<=7&&days>=0){
        printf("no fine");
    }
    else{
        printf("Invalid input");
    }
    
    return 0;
}