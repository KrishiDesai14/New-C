#include<iostream>
using namespace std;

int main () {

    int n,i;

    cout<<endl<<"Enter number=> ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<endl<<"Even number is=> "<<i;
        }
        else
        {
            cout<<endl<<"Odd number is=> "<<i;
        }
    }



}