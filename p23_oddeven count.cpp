#include<iostream>
using namespace std;

int main () {

    int a[100]= {11,55,90,77,60,55,12,5,9,54}, eve=0,odd=0;
    int i,s=0;
    int n=10;

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<endl<<"Even number=> "<<a[i];
            eve++;
        }
        else 
        {
            cout<<endl<<"odd number=> "<<a[i];
            odd++;
        }
    }

    cout<<endl<<"even count= "<<a[i]<<" odd count= "<<a[i];

    cout<<endl<<"sum= "<<s;
}