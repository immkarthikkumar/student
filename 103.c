#include<stdio.h>
void main()
{
	char a[30];
	int i,l;
	printf("Enter the String:");
	scanf("%[^\n]s",&a);
	l=strlen(a);
	a[0]=toupper(a[0]);
	for(i=0;i<l;i++)
	{
		if(a[i]==' ')
		{
			a[i+1]=toupper(a[i+1]);
		}
	}
	printf("\n%s",a);
}
