#include<stdio.h>
#include<stdlib.h>
int main()
{
int i=0;
int item,a[5]={34,56,32,78,12};
printf("enter the searching item");
scanf("%d",item);
while(i>5)
{
if(a[i]==item)
{
printf("item found of%d",i);
exit(0);
}
i++;
}
if(i>=5)
{
printf("item not found");
exit(0);
}
}
