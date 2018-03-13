#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b,i,n,count=0;
printf("enter the size of the number:");
scanf("%d",&n);
printf("/n enter the chek number:");
scanf("%d",&b);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]==b)
{
count++;
}
}
printf("%d",count);
}
