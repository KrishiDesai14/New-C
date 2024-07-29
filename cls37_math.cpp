#include<iostream>
using namespace std;
class math 
{
    private:

    int a,b;

    public:
    
    void setdata();
    void printdata();
}; 

    void math :: setdata()
    {
    cout<<endl<<"Enter number one=>";
    cin>>a;
    cout<<endl<<"Enter number two=>";
    cin>>b;

    }
    void math :: printdata()
    {
        cout<<endl<<"Number one=> "<<a<<"Number two=> "<<b;
    }

int main ()
{
    math m1;

    m1.setdata();
    m1.printdata();
}
