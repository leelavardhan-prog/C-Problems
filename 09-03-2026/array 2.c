#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    int sum=0;
    for(int j=0;j<n;j++){
        sum+=arr[j];
        if(arr[j]>max){
            max=arr[j];
        }
    }
    printf("total votes : %d\n",sum);
    printf("highest votes is : %d \n",max);
    return 0;
}