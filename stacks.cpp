#include<stdio.h>
#include<stdlib.h>
#define size 4
int top=-1,
inp_array[size];
void push();
void pop();

void show();
int main()
{
    int choice;
    while(1)
{
printf("\n perform operations on the stacks:");
printf("\n1.push the element\n2.pop the element\n3.show\n4.end");
printf("\n\n enter the choice:");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    push();
    break;
    case 2:
    pop();
    break;
    case 3:
    show();
    break;
    case 4:
    exit(0);
    default:
    printf("\n invaild choice!!");
}
}
}
void push()
{
    int x;
    if(top==size-1)
    {
        printf("\n overflow!!");
    }
    else
    {
        printf("\n enter the element to the added onto the stack:");
        scanf("%d",&x);
        top=top + 1 ;
        inp_array[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\n underflow!!");
    }
    else
    {
        printf("\n popped element:%d",inp_array[top]);
        top=top-1;
    }
}
void show()
    {
        if(top==-1)
        {
            printf("\n underflow!!");
        }
        else
    {
    printf("\n elements present in the stack:\n");
    for(int i=top; i>= 0;--i)
    printf("%d\n",inp_array[1]);
    }
    }











