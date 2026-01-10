#include <stdio.h>
#include<string.h>
int main() {
   char ch[50];
   fgets(ch,50,stdin);
   for(int i=strlen(ch)-1;i>=0;i--){
    printf("%c",ch[i]);
   }
    
    return 0;
}