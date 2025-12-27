#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=1&&a<=9||a<=-1&&a>=-9){
        printf("single digit");
    }
    else if(a>=10&&a<=99||a<=-10&&a>=-99){
       printf("double digit");
    }
    else if(a>=100&&a<=999||a<=-100&&a>=-999){
        printf("thrible digit");
    }
    else if(a>999) {
        printf("more than that");
    }
    else{
        printf("Invalid input");
    }
    
    return 0;
}