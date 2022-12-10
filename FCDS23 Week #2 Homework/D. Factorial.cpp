#include <iostream>

using namespace std;

int main()
{
    int n,i,size,j;


    cin>>size;
    int array[size];
    for (i=0;i<size;i++){
    cin>>n;
    int fact =1;
    for (j=1; j<=n ;j++){
        fact*=j; }

    array[i]=fact;

    }
    for (i=0;i<size;i++){

    cout<<array[i]<<endl;}

    return 0;
}
