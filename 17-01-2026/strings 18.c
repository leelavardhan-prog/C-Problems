#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);

    for (int i=a;i<=b;i++) {
        if (i<=1) 
        continue;
        c = 1;
        for (int j=2;j<=i/2;j++) {
            if (i % j == 0) {
                c = 0;
                break;
            }
        }
        if (c)
        printf("%d ",i);
    }    
    return 0;
}