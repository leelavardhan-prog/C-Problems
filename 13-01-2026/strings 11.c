#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int x=n,y=n;
   int sum=0;
   int len=0;
   while(n!=0){
    n=n/10;
    len++;
    }
    while(x!=0){
        int rem=x%10;
        int pow=1;
        for(int i=0;i<len;i++){
            pow=pow*rem;
        }
        sum=sum+pow;
        x=x/10;
    }
    printf("%d\n",sum);
   if(sum==y){
    printf("armstrong number");
   }
   else{
    printf("not armstrong number");
   }
    
    return 0;
}