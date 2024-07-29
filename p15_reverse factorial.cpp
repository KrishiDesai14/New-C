#include<iostream>
using namespace std;

int main () {

    int n;
    int rem,rev;

    cout<<endl<<"Enter number=> ";
    cin>>n;

    rev=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<endl<<"rev no=> "<<rev;
} 
