#include<iostream>
using namespace std;

class base
{
    protected:

    int x;

    public:

    void setbase()
    {
        cout<<endl<<"Enter value of x=> ";
        cin>>x;
    }
    void printbase()
    {
        cout<<endl<<" x=> "<<x;
    }
    
};

class derived : public base
{
    public:

    int y;
    public:

    void setderived()
    {
    cout<<endl<<"Enter the value of y=> ";
    cin>>y;
    }

    void printderived()
    {
        cout<<endl<<" y=> "<<y;
    }

    void printmulti()
    {
        cout<<endl<<" Multiplication of x and y is => "<<x*y;
    }

};

int main()
{
    derived d1;

    d1.setderived();
    d1.printderived();

    d1.printbase();
    d1.printderived();
    d1.printmulti();

}