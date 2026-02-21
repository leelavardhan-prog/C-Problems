#include <stdio.h>
int main() {
    int capacity,n,limit;
    scanf("%d",&capacity);
    scanf("%d",&n);
    int remaining;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&limit);
        sum+=limit;
        remaining=capacity-limit;
        if(remaining<0){
            count++;
        }
    }
    printf("Remaining capacity : %d\n",remaining);
    printf("Overflow Days : %d",count);
    
    return 0;
}