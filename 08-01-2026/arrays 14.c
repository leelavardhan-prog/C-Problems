#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int sec_lar=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            sec_lar=max;
           max=arr[i];
        }
        else if(arr[i]>sec_lar&&sec_lar!=max){
          sec_lar=arr[i];
        }
    }
            printf("%d ",sec_lar);

    return 0;
}