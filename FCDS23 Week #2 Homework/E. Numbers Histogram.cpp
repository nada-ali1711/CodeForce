#include <iostream>

using namespace std;

int main()
{
    char s;
    int t,n,i,j;
    cin>>s>>t;
    int arr[t];
    for (i=0;i<t;i++){
    cin>>n;
    arr[i]=n;
    }
    for (i=0;i<t;i++){
    for (j=0;j<arr[i];j++){
    cout<<s;
   }
   cout<<endl;

    }




    return 0;
}
