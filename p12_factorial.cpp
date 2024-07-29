#include<iostream>
using namespace std;

int main () {

    int i,n,f=1;

    cout<<endl<<"Enter number=> ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<endl<<" X "<<i;
        f=f*i;
    }

    cout<<endl<<"Fact= "<<f;


}
