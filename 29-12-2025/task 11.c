#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=1&&a<=9||a>=-9&&a<=-1){
        printf("single digit");
    }
    else if(a>9){
        printf("not single digit");
    }
    else {
        printf("invalid input");
    }
    return 0;
}