#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=0;
    int noise;
    int count=0;
    int current=0;
    int max=0;
    while(i<n){
        scanf("%d",&noise);
        if(noise>70){
            count++;
            current++;
            if(current>max){
                max=current;
            }
        }
        else{
            current=0;
        }
        i++;
    }
    printf("Noise Violations : %d\n",count);
    printf("Longest Violation Streak : %d",max);
    return 0;
}