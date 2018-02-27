#include<stdio.h>
void main()
{
	float s,p,r,t;
	printf("Enter the Principal value:");
	scanf("%f",&p);
	printf("Enter the Rate:");
	scanf("%f",&r);
	r=r/100;
	printf("Enter the Time:");
	scanf("%f",&t);
	s=p*(r*t);
	printf("%f",s);
}
