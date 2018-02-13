#include <stdio.h>

int main(void) {
	char s[1000];
	int i,c,j,count=0;
	scanf("%s",s);
	c=strlen(s);
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<=c;j++)
		{
	if(s[i]==s[j])
	count++;
	}
	}
	if(count==0)
	printf("yes");
	else
	printf("no");
	return 0;
}
