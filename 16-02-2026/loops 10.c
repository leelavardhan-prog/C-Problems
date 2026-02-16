#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev=0;
    int x=n;
    while(n!=0){
        int rem;
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d\n",rev);
    if(rev==x){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}