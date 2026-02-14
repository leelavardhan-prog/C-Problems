#include <stdio.h>
int main() {
    int speed;
    scanf("%d",&speed);
    if(speed>80){
        printf("speed limit exceed");
    }
    else{
        printf("within speed limit");
    }
    
    return 0;
}