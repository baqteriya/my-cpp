#include<stdio.h>
int main()
{
    int i,j,n,key,temp;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j>=1;j--)
        {
            if(a[j-1]>9)
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

