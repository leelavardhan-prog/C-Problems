#include <stdio.h>
int main() {
    int Tdata,n,data;
    scanf("%d",&Tdata);
    scanf("%d",&n);
    int remaining;
    int sum=0;
    int count =0;
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        if(Tdata>=sum){
            sum+=data;
            count++;
        }
    }
    printf("remaining data : %d\n",Tdata-sum);
    printf("Successful Days : %d",count);
    
    return 0;
}