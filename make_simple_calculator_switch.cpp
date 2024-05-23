#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    char choice;
    int x,y;
    while(1)
    {
        cout<<"enter the operator(+,-,*,/)\n enter x to"
        "exit\n";
        cin>>choice;
        if(choice=='x')
        {
            exit(0);
        }
        cout<<"enter the two numbers:";
        cin>>x>>y;
        switch(choice)
        {
        case'+':
            cout<<x<<"+"<<y<<"="<<x+y<<endl;
            break;
        case'-':
            cout<<x<<"-"<<y<<"="<<x-y<<endl;
            break;
        case'*':
            cout<<x<<"*"<<y<<"="<<x*y<<endl;
            break;
        case'/':
            cout<<x<<"/"<<y<<"="<<x/y<<endl;
            break;
        default:
            printf("invalid operator input\n");
        }
    }
    return 0;
}
