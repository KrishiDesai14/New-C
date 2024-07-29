#include<iostream>
using namespace std;
int main () {

    int i,n;

    cout<<endl<<"Enter number=> ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<endl<<i<<"---"<<i*i<<"---"<<i*i*i;
    }
}