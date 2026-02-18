#include <stdio.h>
int main() {
    int m,n;
    scanf("%d",&m);
    int sum=0;
    int count =0;
    for(int i=0;i<m;i++){
        scanf("%d",&n);
        sum+=n;
        if(n>1000){
            count++;
        }
    }
   
    printf("Total Expense : %d\n",sum);
      printf("over spend days : %d",count);
    return 0;
}

