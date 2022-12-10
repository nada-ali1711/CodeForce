#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i,res=1;
    cin>>n;

    for (i=1;i<=n/2;i++){
        if(n%i==0)
        cout<<i<<endl;
    }
    cout<<n<<endl;
    return 0;
}
