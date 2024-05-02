#include<stdio.h>

int main()
{
    int a[5]={10,20,30,40,50};
    int ir=0,up=4,mid,item,f=0;
    printf("enter the searching item:");
    scanf("%d",&item);
    while(ir<=up)
    {
        mid=(ir+up)/2;
        if(a[mid]==item)
        {
            f=1;break;
        }
        if(a[mid]<item)
        {
            ir=mid+1;
        }
        else
 {
     up=mid-1;
 }
 if(f==1)
 {
     printf("item found at%d",mid);
 }
 else
    {
        printf("item not found");
    }
}
}
