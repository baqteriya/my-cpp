#include<stdio.h>
int main()
{
    int i,j,m,temp,l,n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        m=i;
        for(j=i+1;j<n;i++)
        {
            if(a[j]<a[m])
            {
                m=j;
            }
            temp=a[m];
            a[m]=a[i];
            a[i]=temp;
        }
    }
    printf("sorted array");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    }

