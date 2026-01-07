#include <stdio.h>
int main() {
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x[n];
    for(i=0;i<n;i++){
       x[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",x[i]);
    }
    
    return 0;
}