#include <stdio.h>
int main() {
    int n,sum=0,a;
    scanf("%d",&n);
    for (int i=2;i<=n;i++) {
        a = 1;
        for (int j=2;j<=i/2;j++) {
            if (i % j == 0) {
                a = 0;
                break;
            }
        }

        if (a == 1) 
        sum += i;
    }    

    printf("%d",sum);
    return 0;
}