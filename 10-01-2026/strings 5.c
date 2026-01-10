#include <stdio.h>
#include<string.h>
int main() {
   char ch[50];
   fgets(ch,50,stdin);
   int i,count=0;
   for(i=0;i<strlen(ch);i++){
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
        count++;
    }
   }
   printf("%d",count);
   return 0;
}