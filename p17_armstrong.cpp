#include<iostream>
using namespace std;

int main () {

    int n,y;
    int rem,rev;

    cout<<endl<<"Enter number=> ";
    cin>>n;

    y=n;
    rev=0;
    while(n!=0)
    {
        rem=n%10;
        rev=rev+(rem*rem*rem);
        n=n/10;
 }

    cout<<endl<<"rev no=> "<<rev<<" No = "<<y;

   
    if(rev==y)
    {
        cout<<endl<<"its a Armstrong number";
    }
    else
    {
        cout<<endl<<"its not a Armstrong number";
    }
    
} 
