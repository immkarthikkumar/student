#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[100];
    int n,r;
    printf("enter the string:");
    scanf("%s",&a);
    n=strlen(a);
    r=n/2;
    a[r]='*';
    printf("%s",a);
}
