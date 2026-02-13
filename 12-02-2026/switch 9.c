#include <stdio.h>
int main() {
    int room;
    char ch;
    scanf("%d",&room);
    scanf(" %c",&ch);
    switch(room){
        case 1:
        if(ch=='a'||ch=='A'){
            printf("2500 rupees");
        }
        else if(ch=='b'||ch=='B'){
            printf("2000 rupees");
        }
        else{
            printf("invalid input");
        }
        break;


        case 2:
        if(ch=='c'||ch=='C'){
            printf("4000 rupees");
        }
        else if(ch=='d'||ch=='D'){
            printf("3000 rupees");
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