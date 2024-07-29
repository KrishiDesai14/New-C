#include<iostream>
using namespace std;

int main() {

    int op;
    int a,b;

    do{

    cout<<endl<<"Enter 1 for addition";
    cout<<endl<<"Enter 2 for subtraction";
    cout<<endl<<"Enter 3 for multiplication";
    cout<<endl<<"Enter 4 for division";
    cout<<endl<<"enter=> ";
    cin>>op;

    if(op==1)
    {
        cout<<endl<<"Enter first number=> ";
        cin>>a;

        cout<<endl<<"Enter secong number=> ";
        cin>>b;

        cout<<endl<<"Sum of two number is=> "<<a+b;

    }

    else if(op==2)
    {
        cout<<endl<<"Enter first number=> ";
        cin>>a;

        cout<<endl<<"Enter secong number=> ";
        cin>>b;

        cout<<endl<<"Subtraction of two number is=> "<<a-b;

    }

    else if (op==3)
    {
        cout<<endl<<"Enter first number=> ";
        cin>>a;

        cout<<endl<<"Enter secong number=> ";
        cin>>b;

        cout<<endl<<"multiplication of two number is=> "<<a*b;

    }

    else if(op==4)
    {
        cout<<endl<<"Enter first number=> ";
        cin>>a;

        cout<<endl<<"Enter secong number=> ";
        cin>>b;

        cout<<endl<<"division of two number is=> "<<a/b;

    }
    else
    {
        cout<<endl<<"Wrong opt";
    }

    
     }  while(op!=5);

}
