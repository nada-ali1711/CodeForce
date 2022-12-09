#include <iostream>

using namespace std;

int main()
{
    int x;
    int i=0;
    int j=0;
    cin>>x;

    for (i;x>=365;i++){
    x=x-365;}

    for (j;x>=30;j++){
    x=x-30;}


    cout<<i<<" years"<<endl;
    cout<<j<<" months"<<endl;
    cout<<x<<" days";




    return 0;
}
