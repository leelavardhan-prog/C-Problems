#include <stdio.h>
int main() {
     float temp;
     scanf("%f",&temp);
     if(temp>30){
        printf("It is Hot");
     }
     else if(temp<30){
        printf("It is Normal");
     }
     return 0;
}
