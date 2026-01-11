#include <stdio.h>
#include<string.h>
int main() {
   char ch[50];
   fgets(ch,50,stdin);
   int count=0;
   ch[strlen(ch)-1]='\0';
   for(int i=0;i<strlen(ch);i++){
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
        //printf("vowels");
    }
    else{
        count++;
       }
     }
    printf("%d",count);
    
    return 0;
}