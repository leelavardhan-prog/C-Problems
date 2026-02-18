#include <stdio.h>
int main() {
    int n,amount;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<3;i++){
        scanf("%d",&amount);
        sum+=amount;
    }
    if(sum<=10000){
        printf("Approved");
    }
    else{
        printf("Limit Exceed");
    }
    
    return 0;
}