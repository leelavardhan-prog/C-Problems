#include <stdio.h>
int main() {
    int a,b,c,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180&&a==b&&a==c){
        printf("Valid Triangle");
    } 
    else{
        printf("Not a Valid triangle");
    }
    
    return 0;
}