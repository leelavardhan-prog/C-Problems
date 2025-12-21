//#include <stdio.h>
//int main() {
     //int digit;
     //scanf("%d",&digit);
     //if(digit>-10&&digit<10){
       // printf("Single digit");
   /*  }
     else{
        printf("Not single digit ");
     }
     return 0;
}*/
#include <stdio.h>
int main() {
     int digit;
     scanf("%d",&digit);
     if(digit/10==0){
        printf("Single digit");
     }
     else{
        printf("Not single digit ");
     }
     return 0;
}
