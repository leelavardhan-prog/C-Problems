#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=1;
    for(int j=0;j<n;j++){
        if(arr[j]>arr[j-1]){
            x=1;
        }
        else{
            x=0;
            break;
        }
    }
    if(x){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}