#include <stdio.h>
#include <limits.h> 
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s_max=INT_MIN;
    int max=INT_MIN;
    for(int j=0;j<n;j++){
        if(arr[j]>max){  // 9000>4000  // 1000>9000
            s_max=max; // 4000
            max=arr[j]; // 9000
        }
        else if(s_max!=max&&arr[j]>s_max){ // 4000
            s_max=arr[j];
        }
    }
    printf("%d",s_max);

    return 0;
}