#include <stdio.h>
#include<string.h>
int main() {
    char ch[50];
   fgets(ch,50,stdin);
   int count=0;
   for(int i=0;i<strlen(ch)-1;i++){
    if(ch[i]==' '){
      count++;
    }
   }
   printf("%d",count);
    return 0;
}