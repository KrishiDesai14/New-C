#include<iostream>
using namespace std;
class math 
{
    private:
    int a,b;

    public:
    void setdata()
    {
        cout<<endl<<"Enter a=>";
        cin>>a;
        cout<<endl<<"Enter b=>";
    }

    void printdata()
    {
        cout<<endl<<"a= "<<a<<" b= "<<b;

    }
    math add(math m2)
    {
        math m3;
        m3.a=a+m2.a;
        m3.b=b+m2.b;
        return m3;
    }

};
int main ()
{

    math m1,m2, m3;

    m1.setdata();
    m2.setdata();
    m1.printdata();
    m2.printdata();
    m3= m1.add(m2);
    m3.printdata();

}