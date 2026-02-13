#include<stdio.h>
int main(){
    int loan,score;
    scanf("%d",&loan);
    scanf("%d",&score);
    switch(loan){
        case 1:
        if(score>=700&&score<=900){
            printf("approved");
        }
        else if(score>=650&&score<700){
            printf("manual review");
        }
        else{
            printf("rejected");
        }
        break;
         
         case 2:
         if(score>=700&&score<=900){
            printf("approved");
         }
         else if(score<700&&score>=300){
            printf("Rejected");
         }
         else{
            printf("invalid input");
         }
         break;
         default:
         printf("invalid input");
    }
    return 0;
}