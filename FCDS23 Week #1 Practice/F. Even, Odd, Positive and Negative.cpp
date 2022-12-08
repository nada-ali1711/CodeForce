
#include <iostream>

using namespace std;

int main()
{
    int n,m,even_i=0,n_count=0,odd_i=0;
    int p_count=0;
    cin>>n;
    for (int i=1;i<=n;i++){
    cin>>m;
    if (m%2==0)
    even_i+=1;
    else
    odd_i+=1;
    if (m>0)
    p_count+=1;
    if (m<0)
    n_count+=1;

    }
    cout<<"Even: "<<even_i<<endl;
    cout<<"Odd: "<<odd_i<<endl;
    cout<<"Positive: "<<p_count<<endl;
    cout<<"Negative: "<<n_count<<endl;
    return 0;
}
