#include<stdio.h>
void main()
{
    int a,b,i,temp=0;
    printf("enter the numbers:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        temp=temp+b;
    }
    printf("sum of the numbers are %d",temp);
}
