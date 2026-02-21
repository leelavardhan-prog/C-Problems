#include <stdio.h>
int main() {
    int n,patients;
    int sum=0,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&patients);
        sum+=patients;
        if(patients>100){
            count++;
        }
    }
    printf("Total patients : %d\n",sum);
    printf("Over crowd : %d",count);
    
    return 0;
}