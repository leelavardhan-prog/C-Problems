#include<stdio.h>
int main(){
    int n,i,first=0,second=1,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d ",first);
            temp=first+second;
            first=second;
            second=temp;
    }
   printf("%d  ",temp);
    return 0;
}