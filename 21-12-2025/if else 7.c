#include <stdio.h>
int main() {
     int a,b,c;
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     if(a>b&&a>c){
        printf("%d is Big");
     }
    else if(b>c&&b>a){
        printf("%d is Big");
    }
    else if(c>a&&c>b){
        printf("%d is Big");
    }
    else
    printf("Invalid input");
    return 0;
}