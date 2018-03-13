#include<stdio.h>
void main()
{
	int n,b,i,a[30],j,t;
	printf("Enter N and K Elements:");
	scanf("%d%d",&n,&b);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("%d",a[b]);
}
