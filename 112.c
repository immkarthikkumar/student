#include<stdio.h>
void main()
{
    int m,k,i,a[20];
    printf("Enter the Size:");
    scanf("%d",&m);
    printf("\nEnter Search element:");
    scanf("%d",&k);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==k)
        {
            printf("\nYes");
        }
        else
        {
            printf("\n no");
        }
    }
}
