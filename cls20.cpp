#include<iostream>
using namespace std;
class math
{
    protected:
    int a,b;

    public:
    void setdata()
    {

    cout<<endl<<"Enter a=>";
    cin>>a;
    cout<<endl<<"Enter b=>";
    cin>>b;

    }

    void printdata()
    {
        cout<<endl<<"a=> "<<a<<"b=> "<<b;

    }

    void add(math m1, math m2)
    {
        a=m1.a+m2.a;
        b=m1.b+m2.b;
    }

};

int main ()
{
    math m1,m2, m3;

    m1.setdata();
    m2.setdata();
    m1.printdata();
    m2.printdata();
    m3.add(m1,m2);
    m3.printdata();

}