#include <stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i,j;
    printf("Enter the String:");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(isdigit(a[i]))
        {
            b[j]=a[i];
            j++;
        }
    }
    printf("%s",b);
    return 0;
}
