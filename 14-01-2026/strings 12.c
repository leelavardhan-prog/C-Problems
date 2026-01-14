#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int x=n;
    int sum=0;
    while(n!=0){
        int rem=n%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
           fact=fact*i;
        }
        n=n/10;
        sum=sum+fact;
    }
    printf("%d\n",sum);
    if(sum==x){
        printf("strong number");
    }
    else{
        printf("not strong number");
    }
    return 0;
}