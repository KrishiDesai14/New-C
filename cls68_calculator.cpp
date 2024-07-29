#include<iostream>
using namespace std;

class number
{
    protected:
    int n1,n2;

    public:
    void setnumber()
    {
        cout<<endl<<"Enter number one=> ";
        cin>>n1;

        cout<<endl<<" Enter number two=> ";
        cin>>n2;

    }
    void printnumber()
    {
        cout<<endl<<" number 1=> "<<n1<<" number 2=> "<<n2;
    }
    void add()
    {
        cout<<endl<<" Addition=> "<<n1+n2;
    }
    void sub()
    {
        cout<<endl<<" subtraction=> "<<n1-n2;
    }
    void multi()
    {
        cout<<endl<<" multi=> "<<n1*n2;
    }
    void div()
    {
        cout<<endl<<" division=> "<<n1/n2;
    }

};