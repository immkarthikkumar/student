#include<stdio.h>
void main()
{
    int a,i,count=0;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    
    if(count==0)
    {
        printf("not composite");
    }
    else
    {
        printf(" composite");
    }
}
