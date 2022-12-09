#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,max_n,min_n,midd_n;
    cin>>a>>b>>c;

    if (a>=b && b>=c){
    max_n=a;
    midd_n=b;
    min_n=c;}
    else if (a>=c && c>=b){
    max_n=a;
    midd_n=c;
    min_n=b;}
    else if (b>=c && c>=a){
    max_n=b;
    midd_n=c;
    min_n=a;}
    else if (b>=a && a>=c){
    max_n=b;
    midd_n=a;
    min_n=c;}
    else if (c>=b && b>=a){
    max_n=c;
    midd_n=b;
    min_n=a;}
    else if (c>=a && a>=b){
    max_n=c;
    midd_n=a;
    min_n=b;}

    cout<<min_n<<endl;
    cout<<midd_n<<endl;
    cout<<max_n<<endl<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c;



    return 0;
}
