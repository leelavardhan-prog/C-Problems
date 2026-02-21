#include <stdio.h>
int main() {
   int n,days;
   int sum=0,count=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    scanf("%d",&days);
    sum+=days;
    if(days>2){
        count++;
    }
   }
   printf("Total Data : %d\n",sum);
   printf("High Usage Days : %d",count);
    
    return 0;
}