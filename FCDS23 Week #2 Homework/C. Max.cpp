#include <iostream>

using namespace std;

int main()
{
    int n,m,i=1,max=0;

    cin>>m;

    for (i;i<=m;i++){
        cin>>n;
        if (n>max)
            max=n;

    }
    cout<<max;



    return 0;
}
