#include <stdio.h>
#include<string.h>
int main() {
   char ch[50];
   fgets(ch,50,stdin);
   printf("%s",strupr(ch));
    
    return 0;
}