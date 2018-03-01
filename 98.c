#include<stdio.h>
void main()
{
	int k,i,a[20];
	printf("Enter the Number:");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=i)
		{
			printf("\nThe Changed Number is %d",i);
		}
	}
}
