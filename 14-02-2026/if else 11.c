#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("eligible");
    }
    else if(age<18&&age>=1){
        printf("not eligible");
    }
    else{
        printf("invalid input");
    }
    
    return 0;
}