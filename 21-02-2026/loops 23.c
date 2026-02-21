#include <stdio.h>
int main() {
    int n,units;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&units);
        sum+=units;
        if(units>5){
            count++;
        }
    }
    printf("Total Units : %d\n",sum);
    printf("Spike Hours : %d",count);
    return 0;
}