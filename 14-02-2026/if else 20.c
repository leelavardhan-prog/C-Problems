#include <stdio.h>
int main() {
    int AC;
    scanf("%d",&AC);
    if(AC<=18){
        printf("Hesting mode");
    }
    else if(AC>18&&AC<=25){
        printf("Normal mode");
    }
    else if(AC>25&&AC<=100){
        printf("Cooling mode");
    }
    else{
        printf("inavalid input");
    }
    
    return 0;
}