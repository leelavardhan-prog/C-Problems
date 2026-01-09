#include <stdio.h>
#include<string.h>
int main() {
     char ch[50];
     char ch1[50];
     fgets(ch,50,stdin);
     fgets(ch1,50,stdin);
     int res=strcmp(ch,ch1);
     printf("%d\n",res);
     if(res==0){
        printf("equel");
     }
     else {
        printf("not equel");
     }
    return 0;
}