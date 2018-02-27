#include<stdio.h>
void main()
{
    int a,b,n;
    printf("enter the number:");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        n=n*10+b;
        a/=10;
    }
    printf("%d",n);
}
    
