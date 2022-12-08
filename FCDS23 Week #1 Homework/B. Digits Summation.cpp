#include <iostream>

using namespace std;

int main()
{
    long long n, m;
    int count=0;
    cin>>n>>m;
    count=n%10+m%10;
    cout<<count;
    return 0;
}
