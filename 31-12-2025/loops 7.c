#include<stdio.h>
int main(){
    int n;
    int x=0;
    scanf("%d",&n);
    while(n!=0){
        int rem=n%10;
       x=x*10+rem;
       n=n/10;
    }
    printf("%d",x);
    return 0;
}