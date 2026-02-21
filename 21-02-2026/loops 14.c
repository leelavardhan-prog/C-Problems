#include <stdio.h>
int main() {
    int n,days;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&days);
        sum+=days;
        if(days>50000){
            count++;
        }
    }
    printf("Total Revenue : %d\n",sum);
    printf("Target Days : %d",count);
    
    return 0;
}