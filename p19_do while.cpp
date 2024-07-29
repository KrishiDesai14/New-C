#include<iostream>
using namespace std;

int main () {

    int op;
    int s,c;
do 
{
    cout<<endl<<"Enter 1 for square";
    cout<<endl<<"enter 2 for cube";
    cout<<endl<<"enter =>";
    cin>>op;

    if(op==1)
    {
        cout<<endl<<"Enter number=> ";
        cin>>s;

        cout<<endl<<"square of number is=> "<<s*s;
    }

    else if(op==2)
    {
        cout<<endl<<"Enter number=> ";
        cin>>c;

        cout<<endl<<"square of number is=> "<<c*c*c;
    }
    else if(op==3)
    {
        cout<<endl<<"Bye";
    }
    else{
        cout<<endl<<"Wrong opt";
    }

  }  while(op!=4);

}