#include <stdio.h>
int main() {
    int n,tloss;
    scanf("%d",&n);
    int total_loss=0;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&tloss);
        total_loss+=tloss;
        if(tloss>100){
            count++;
        }
    }
    printf("total loss : %d\n",total_loss);
    printf("high loss Days : %d",count);
    
    return 0;
}