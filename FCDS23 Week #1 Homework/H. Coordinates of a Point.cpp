#include <iostream>

using namespace std;

int main()
{
    float x,y;

    cin>>x>>y;
    if (x>0)
    {if (y>0)
    cout<<"Q1";
    else if (y<0)
    cout<<"Q4";
    else if (y==0)
    cout<<"Eixo X";}
    else if (x<0){
    if (y>0)
    cout<<"Q2";
    else if (y<0)
    cout<<"Q3";
    else if (y==0)
    cout<<"Eixo X";
    }
    else if (x==0){
    if (y==0)
    cout<<"Origem";
    else
    cout<<"Eixo Y";
    }



    return 0;
}
