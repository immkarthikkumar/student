#include <stdio.h>
int main(void)
{
int count=0,a,value;
printf("Enter the number:");
scanf("%d",&value);
for(a=2;a<value;a++)
{
if(value%a==0)
{
count++;
}
}
if(count==0)
printf("It is a prime number");
else
printf("composite number");
return 0;
}
