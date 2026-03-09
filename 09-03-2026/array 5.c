#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]>100){
            count++;
        }
    }
    printf("more than 100 is : %d",count);

    return 0;
}