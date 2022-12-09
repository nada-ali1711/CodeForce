#include <iostream>

using namespace std;

int main()
{
    char s;
    int a,b;

    cin>>a>>s>>b;
    if(s=='+')
    cout<<a+b;
    else if(s=='-')
    cout<<a-b;
    if(s=='*')
    cout<<a*b;
    else if(s=='/')
    cout<<a/b;
    return 0;
}
