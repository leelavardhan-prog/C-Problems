#include <stdio.h>
int main() {
    int n,score;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&score);
        sum+=score;
        if(score>50){
            count++;
        }
    }
    printf("Total Risk : %d\n",sum);
    printf("High Risk Sessions : %d",count);
    
    return 0;
}