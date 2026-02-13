#include<stdio.h>
int main(){
    int mode;
    scanf("%d",&mode);
    char ch;
    scanf(" %c",&ch);
    switch(mode){
        case 1:
        if(ch=='R'){
            printf("5000");
        }
        else if(ch=='S'){
            printf("3000");
        }
        else{
            printf("invalid mode");
        }
        break;
        case 2:
        if(ch=='R'){
            printf("9000");
        }
        else if(ch=='S'){
            printf("7000");
        }
        else{
            printf("invalid mode");
        }
        break;
        default:
        printf("invalid input");
    }
    return 0;
}