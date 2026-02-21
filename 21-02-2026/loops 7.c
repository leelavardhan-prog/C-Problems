#include <stdio.h>
int main() {
    int n,hr;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&hr);
        sum+=hr;

        if(hr>50){
            count++;
        }
    }
    printf("Total rain fall : %d\n",sum);
    printf("Heavy rain days : %d",count);
    
    return 0;
}