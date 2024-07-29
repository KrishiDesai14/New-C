#include<iostream>
using namespace std;

int main () {

    char op;
    int s,c;

    cout<<endl<<"Enter S for square";
    cout<<endl<<"enter C for cube";
    cout<<endl<<"enter =>";
    cin>>op;

    if(op=='s')
    {
        cout<<endl<<"Enter number=> ";
        cin>>s;

        cout<<endl<<"square of number is=> "<<s*s;
    }

    else if(op=='c')
    {
        cout<<endl<<"Enter number=> ";
        cin>>c;

        cout<<endl<<"square of number is=> "<<c*c*c;
    }

}