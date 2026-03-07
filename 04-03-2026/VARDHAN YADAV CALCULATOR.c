#include <stdio.h>
int main() {
    printf("welcome to the vardhan yadav calculator");
    printf("\n=======================================\n");
    printf("\naddition(+)");
    printf("\nsubtraction(-)");
    printf("\nmultiplication(*)");
    printf("\ndivision(/)\n");


    char operation;
    printf("enter the operation\n");
    scanf("%c",&operation);

    int a,b;
    printf("\nenter the first and second number\n");
    scanf("%d %d",&a,&b);

    switch(operation){
        case '+':
        printf("%d+%d=%d",a,b,a+b);
        break;
        case '-':
        printf("%d - %d = %d ",a,b,a-b);
        break;
        case '*':
        printf("%d * %d = %d ",a,b,a*b);
        break;
        case '/':
        if(b==0){
            printf("Error! divisible by zero");
        }
        else{
            printf("%d / %d = %d",a,b,a/b);
        }
        break;
    }
    
    return 0;
}