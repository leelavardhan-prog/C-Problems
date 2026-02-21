#include <stdio.h>
int main() {
    int n,m,avg;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        sum+=m;
        avg=sum/n;
        if(m<40){
            count++;
        }
    }
    printf("average score : %d\n",avg);
    printf("Failed subjects : %d",count);
    return 0;
}