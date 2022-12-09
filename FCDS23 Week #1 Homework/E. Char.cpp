#include <iostream>

using namespace std;

int main()
{
    char x;

    cin>>x;
    if(islower(x))
    x=x-32;
    else
    x=x+32;
    cout<<x;

    return 0;
}
