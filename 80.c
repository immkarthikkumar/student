#include <stdio.h>
void main()
{
	int a,b,r=0,i;
	printf("Enter the number:");
    scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		r=(r*10)+b;
		a=a/10;
	}
	printf("The odd numbers are:");
	while(r!=0)
	{
		i=r%10;
		r=r/10;
		if(i%2!=0)
		{
		  printf("%d  ",i);
		}

	}
}
