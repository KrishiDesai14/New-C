#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int temp;

    cout<<endl<<"Enter a=> ";
    cin>>a;

    cout<<endl<<"Enter b=> ";
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<endl<<"After swapping a=> "<<a<<"b=> "<<b;
    
    
    }

