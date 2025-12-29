#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>=81&&marks<=100){
        printf("Grade A");
    }
    else if(marks>=60&&marks<=80){
        printf("Grade B");
    }
    else if(marks>=40&&marks<=59){
        printf("Grade C");
    }
    else if(marks<40){
        printf("Fail");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}