#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);
    if(a%b==0)
    {
        c=a/b;
        c=a*b;
        printf("the gcd of the given numbers are:%d",c);
    }
    else
    {
        c=1;
        printf("the gcd of the given number are:%d",c);
    }
}
