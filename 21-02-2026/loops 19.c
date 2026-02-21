#include <stdio.h>
int main() {
    int n,noise;
    int count=0;
    scanf("%d",&n);
    int max;
    for(int i=0;i<n;i++){
        scanf("%d",&noise);
        if(max<noise){
            max=noise;
        }
        if(noise>70){
            count++;
        }
    }
    printf("Maximum Noise : %d\n",max);
    printf("Noisy Periods : %d",count);
    
    return 0;
}