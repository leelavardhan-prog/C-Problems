#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>=90&&marks<=100){
        printf("Grade A");
    }
    else if(marks<90&&marks>=75){
        printf("Grade B");
    }
    else{
        printf("Fail");
    }
    
    return 0;
}