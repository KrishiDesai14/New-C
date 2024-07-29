#include<iostream>
using namespace std;

class math
{
    private:
    int n1,n2;

    public:
    void setdata()
    {
        cout<<endl<<"Enter number one=> ";
        cin>>n1;

        cout<<endl<<"Enter number two=> ";
        cin>>n2;
    }

    void printdata()
    {
        cout<<endl<<"Number 1=> "<<n1<<" Number 2=> "<<n2;
    }

    void multi()
    {
        cout<<endl<<" Multiplication of two number is=> "<<n1*n2;
    }
    void div()
    {
        cout<<endl<<" Division of two number is=> "<<n1/n2;
    }
    void add()
    {
        cout<<endl<<" Addition of two number is=> "<<n1+n2;
    }
    void sub()
    {
        cout<<endl<<" subtraction of two number is=> "<<n1-n2;
    }

    
};
int main ()
{
    math m1,m2,m3,m4,m5;

    m1.setdata();
    m1.printdata();

    m2.add();
    m3.div();
    m4.multi();
    m5.sub();



}