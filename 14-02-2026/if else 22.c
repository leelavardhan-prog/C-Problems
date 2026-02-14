#include <stdio.h>
int main() {
    int ticket;
    scanf("%d",&ticket);
    if(ticket>=1){
        printf("Confirmed");
    }
    else if(ticket==0){
        printf("Waiting list");
    }
    else {
        printf("invalid input");
    }
    
    return 0;
}