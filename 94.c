#include<stdio.h>
void main()
{
    int a,b[20],i,n;
    printf("how many numbers to be entered:");
    scanf("%d",&a);
    printf("enter the %d numbers:",a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("enter the address of the number to be displayed");
    scanf("%d",&n);
    printf("%d",b[n]);
}
