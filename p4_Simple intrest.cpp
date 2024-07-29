#include<iostream>
using namespace std;

int main () {

    int p,r,t;

    cout<<endl<<"Enter principal amount=> ";
    cin>>p;

    cout<<endl<<"Enter Rate of intrest=> ";
    cin>>r;

    cout<<endl<<"Enter Time period=> ";
    cin>>t;

    cout<<endl<<"Simple intrest=> "<<(p*r*t)/100;
}
