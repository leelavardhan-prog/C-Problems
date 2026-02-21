#include <stdio.h>
int main() {
    int initial,n,withdraw;
    scanf("%d",&initial);
    scanf("%d",&n);
    int count=0;
    int sum=0;
    int remaincash;
    for(int i=0;i<n;i++){
        scanf("%d",&withdraw);
        sum+=withdraw;
        remaincash=initial-sum;
        if(remaincash<5000){
            count++;
        }
    }
    printf("remaining cash : %d\n",remaincash);
    printf("Risk count : %d",count);
    
    return 0;
}