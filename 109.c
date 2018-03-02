#include<stdio.h>
#define MAX_SIZE 1000
void main()
{
    int N[MAX_SIZE];
    int i,m;
    printf("enter the value of N");
    for(i=0;i<10;i++)
    {
        scanf("%d",&N[i]);
    }
    m=N[0];
    for(i=1;i<10;i++)
    {
        if(m>N[i])
        m=N[i];
    }
    printf("THE minimum number is:\t%d",m);
}
