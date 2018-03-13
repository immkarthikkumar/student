#include<stdio.h>
void main()
{
	int n,b,i,a[30],count=0;
	printf("Enter the N and b elements:");
	scanf("%d%d",&n,&b);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]%2==1)
		{
			count++;
			if(count==b)
			{
				printf("%d",a[i]);
			}
		}
	}
}
