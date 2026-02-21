#include <stdio.h>
int main() {
    int n,m;
    scanf("%d",&n);
    int count=0;
    int max;
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        if(m>max){
            max=m;
        }
        if(m>100){
            count++;     
        }
    }
    printf("Highest Price : %d\n",max);
    printf("High Price Days : %d",count);
    return 0;
}