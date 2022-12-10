#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i,res=1;
    cin>>n;
    for (i=1;i<=sqrt(n);i++){
        if(n%i==0)
        res+=1;
    }
    if(res==2 && n!=0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
