#include<stdio.h>
#include<string.h>
void main()
{
int i,j;
char s[100];
printf("enter the string");
scanf("%s",s);
for(i=0;i<strlen(s);i++)
{
printf("%c",s[i]);
i++;
}
printf(" ");
for(i=1;s[i]!='\0';i++)
{
printf("%c",s[i]);
i++;
}
}
