#include<iostream>
using namespace std;
int main()
{
    string str1,str2,result;
    int i;
    cout<<"enter the first string:";
    cin>>str1;
    cout<<"enter the second string:";
    cin>>str2;
    for(i=0;i<str1.size();i++)
    {
        result=result+str1[i];
    }
    for(i=0;i<str2.size();i++)
    {
        result=result+str2[i];
    }
    cout<<"the concatenation of the string" <<str1<<"and"<<str2<<"is"<<result;
    return 0;
}
