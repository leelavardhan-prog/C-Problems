#include <stdio.h>
int main() {
   int np,nt;
   scanf("%d",&np);
   int sum=0;
   for(int i=0;i<np;i++){
    scanf("%d",&nt);
    sum+=nt;
   }
   printf("Total Collection : %d",sum);
    
    return 0;
}