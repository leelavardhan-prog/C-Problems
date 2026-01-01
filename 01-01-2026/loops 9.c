#include <stdio.h>
int main() {
  int i,n;
  scanf("%d",&n);
  int first=0;
  int second=1;
  if(n>=1){
    printf("%d ",first);
  }
  if(n>=2){
    printf("%d ",second);
  }
  for(i=3;i<=n;i++){
    int temp=second;
    second=first+second;
    first=temp;
    printf("%d ",second);
  }
    return 0;
}