#include <stdio.h>
int main() {
    int result;
    scanf("%d",&result);
    if(result<=35){
        printf("Fail");
    }
    else if(result<85&&result>35){
        printf("Pass");
    }
    else if(result>=85&&result<=100){
        printf("Distinction");
    }
    else{
        printf("invalid input");
    }
    
    return 0;
}