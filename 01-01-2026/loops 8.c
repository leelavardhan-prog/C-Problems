#include <stdio.h>
int main() {
    int i,n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
   for(i=n;i<n+m;i++){
    printf("%d %c \n",i,i);
   }
    return 0;
}