#include<stdio.h>
void main()
{
    int a,d,b,c;
    printf("enter the numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    d=(a*b)%c;
    printf("%d",d);
}
