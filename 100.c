#include<stdio.h>
void main()
{
    int a,p=1,r;
    printf("enter the numbers: ");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        p=p*r;
        a=a/10;
    }
    printf("%d",p);
}
