#include <stdio.h>
int main() {
    int n,calls;
    int sum=0;
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&calls);
        sum+=calls;
        if(calls>40){
            count++;
        }
    }
    printf("Total Calls : %d\n",sum);
    printf("Over Load Hours : %d",count);
    return 0;
}