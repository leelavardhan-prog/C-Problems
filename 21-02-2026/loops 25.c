#include <stdio.h>
int main() {
    int n,rate;
    scanf("%d",&n);
    int max;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&rate);
        if(max<rate){
            max=rate;
        }
        if(rate>140){
            count++;
        }
    }
    printf("Max Hearty Rate : %d\n",max);
    printf("Danger Readings : %d",count);
    
    return 0;
}