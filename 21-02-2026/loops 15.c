#include <stdio.h>

int main() {
    int n,volts;
    scanf("%d",&n);
    int count=0;
    int min=99999999;
    for(int i=0;i<n;i++){
        scanf(" %d",&volts);
       if(volts<210){
        count++;
       }
       if(volts<min){
        min=volts;
       }
    }    
    printf("minimum voltage : %d\n",min);
    printf("low voltage events : %d",count);
    return 0;
}