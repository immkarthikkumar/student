#include<stdio.h>
void main()
{
	int k[20],o[20],i,n;
	printf("Enter the Number of Groups:");
	scanf("%d",&n);
	printf("\nNumber of Ninja's in Kabali and Opponent's group:");
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&k[i],&o[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",o[i]-k[i]);
	}
}
