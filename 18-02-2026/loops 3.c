#include <stdio.h>
int main() {
    int u,n;
    scanf("%d",&u);
    int sum=0;
    for(int i=0;i<u;i++){
        scanf("%d",&n);
        sum+=n;
    }
    printf("Total Units : %d",sum);
    
    return 0;
}