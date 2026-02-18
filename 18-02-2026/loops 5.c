#include <stdio.h>
int main() {
    int fullb,usedb,n,remb;
    scanf("%d",&fullb);
    scanf("%d",&usedb);
    int sum=0;
    for(int i=0;i<usedb;i++){
        scanf("%d",&n);
        sum+=n;
        remb=fullb-sum;
    }
    printf("remaining battery : %d",remb);
    
    return 0;
}