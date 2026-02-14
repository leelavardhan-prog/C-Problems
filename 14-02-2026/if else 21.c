#include <stdio.h>
int main() {
    int login ;
    scanf("%d",&login);
    if(login==1){
        printf("Admin");
    }
    else if(login==2){
        printf("User");
    }
    else if(login==3){
        printf("Guest");
    }
    else{
        printf("invalid role");
    }
    
    return 0;
}