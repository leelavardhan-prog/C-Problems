#include <stdio.h>
int main() {
    int n,hours;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    int cost;
    for(int i=0;i<n;i++){
        scanf("%d",&hours);
        sum+=hours;
        cost=sum*200;
        if(hours>3){
            count++;
        }
    }
    printf("Total over time hours : %d\n",sum);
    printf("Overtime Cost : %d\n",cost);
    printf("Heavy Over time Days : %d",count);
    
    return 0;
}