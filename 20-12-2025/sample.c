#include <stdio.h>
int main() {
   int age;
   float gpa;
   char grade;
   char name[50];
   printf("enter your age : ");
   scanf("%d",&age);
   printf("%d\n",age);
   printf("enter your gpa :");
   scanf("%f",&gpa);
   printf("%f",gpa);
   printf("enter your grade :");
   scanf(" %c",&grade);
   printf("%c",grade);
   printf("enter your name ");
   scanf(" %s",&name);
   printf("%s",name);
    return 0;
}