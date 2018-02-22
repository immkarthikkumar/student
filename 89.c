#include<stdio.h>
#include<string.h>
void main()
{
    char l[20];
    int i,j,t,b;
    printf("Enter the value");
    scanf("%s",&l);
    for(i=0;l[i]!='\0';i++)
    {
        for(j=i+1;l[j]!='\0';j++)
        {   
            if(l[i]>l[j])
            {
            t=l[i];
            l[i]=l[j];
            l[j]=t;
            }
        }
    }
    for(i=0;l[i]!='\0';i++)
    {
        printf("%c",l[i]);
    }
}
