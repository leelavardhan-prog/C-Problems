#include <stdio.h>
int main() {
    int accounttype,years;
    scanf("%d",&accounttype);
    scanf("%d",&years);
    switch(accounttype){
        case 1:
        printf("interest 4%");
        break;
        case 2:
        if(years<=3&&years>0){
            printf("interest 5%");
        }else{
            printf("interest 7%");
            break;
        }
        default:
        printf("invalid input");
    }


    return 0;
}