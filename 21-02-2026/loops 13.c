#include <stdio.h>
int main() {
    int n,errors;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&errors);
        sum+=errors;
        if(errors>50){
            count++;
        }
    }
    printf("totla errors : %d\n",sum);
    printf("critical hours : %d",count);
    
    return 0;
}