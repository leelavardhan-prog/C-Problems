#include <stdio.h>
#include<string.h>
int main() {
    char a[50];
   fgets(a,50,stdin);
   char b[sizeof(a)];
   int index=0;
   for(int i=strlen(a)-1;i>=0;i--){
      b[index]=a[i];
      index++;
   }
   int res=strcmp(a,b);
   if(res==0){
    printf("palindromr");
   }
   else{
    printf("not palindrome");
   }
    return 0;
}