#include<stdio.h>
void main()
{
    int a[20],b,i,r,n;
    printf("enter the string:");
    scanf("%d",&b);
    printf("enter the number");
    scanf("%d",&n);
    while(b>0)
    {
        r=b%10;
        a[i]=r;
        b=b/10;
        i++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
