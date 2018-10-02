#include<stdio.h>
#include<string.h>
int main()
{
 char str[100],temp;
 int i,j;
 printf("enter the string");
 gets(str);
 j=strlen(str)-1;
 while(i<j)
{
 temp=str[i];
 str[i]=str[j];
 str[j]=temp;
 i++;
 j--;
}
 printf("%s\n",str);
return 0;
}
