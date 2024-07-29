#include<iostream>
using namespace std;

int main () {

    int i,n;

    cout<<endl<<"Enter number=> ";
    cin>>n;

    for(i=1;i<=10;i++)
    {
        cout<<endl<<n<<" X "<<i<<" = "<<n*i;
    }
}