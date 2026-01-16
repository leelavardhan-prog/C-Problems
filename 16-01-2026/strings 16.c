#include <stdio.h>
int main() {
    int a,b,res=1;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++){
        res=res*a;
    }
     printf("%d\n",res);
    return 0;
}