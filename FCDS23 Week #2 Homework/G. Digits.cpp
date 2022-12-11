#include <iostream>

using namespace std;

int main()
{
    int n,t,i,j;

    cin>>t;
    int arr[t];
    for (i=0;i<t;i++){
        cin>>n;

        arr[i]=n;

        }
    for (i=0;i<t;i++){

    for (j=0;j<=arr[i];j+=1){
        if (arr[i]>10){

        cout<<arr[i]%10<<" ";
        arr[i]=arr[i]/10;}

        if(arr[i]<10){
        cout<<arr[i];
        break;}

       }
    cout<<endl;

    }

    return 0;
}
