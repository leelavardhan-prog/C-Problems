#include <stdio.h>
int main() {
    int n,time;
    scanf("%d",&n);
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&time);
        sum+=time;
        if(time>30){
            count++;
        }
    }
    printf("Total delay : %d\n",sum);
    printf("Delayed deliveries : %d",count);
    
    return 0;
}