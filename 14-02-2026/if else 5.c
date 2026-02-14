#include <stdio.h>
int main() {
    float data;
    scanf("%f",&data);
    if(data>2.0){
        printf("data limit exceed");
    }
    else{
        printf("data within limit");
    }
    
    return 0;
}