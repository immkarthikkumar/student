#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);
    if(a%b==0||b%a==0)
    {
       if(a<b) 
       {
        printf("%d",b);
       }
       else
       {
           printf("%d",a);
       }
    }
    else
    {
        c=a*b;
        printf("%d",c);
    }
}
