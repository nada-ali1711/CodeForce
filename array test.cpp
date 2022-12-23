#include <iostream>

using namespace std;

int main()
{
    int n,x,j=-1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    for( j=(n-1);j>=0;j--){
    if (x==arr[j]){
        cout<<(j+1);
        break;
    }
    }
    if (j<0){

        cout<<j;
    }


    return 0;
}
