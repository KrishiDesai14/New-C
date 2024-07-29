#include<iostream>
using namespace std;
 int main ()
 {
    int base, power, result=1;

    cout<<endl<<" Enter base and power=> ";
    cin>>base>>power;

    cout<<base<<" ^ "<<power<<" = ";

    while( power!=0)
    {
        result *=base;
        --power;
    }

    cout<<result;
 }