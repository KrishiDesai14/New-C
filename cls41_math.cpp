#include<iostream>
using namespace std;
class math
{
    private:
    int h,m,e;

    public:

    void setdata()
    {

    cout<<endl<<"Enter Hindi marks=>";
    cin>>h;
    cout<<endl<<"Enter maths marks=>";
    cin>>m;
    cout<<endl<<"Enter english marks=>";
    cin>>e;
    }
    void printdata()
    {
        cout<<endl<<" Hindi marks=> "<<h<<" Maths marks=> "<<m<<" English marks=> "<<e;
    }
    void operator-()
    {
        h=h-5;
        m=m-5;
        e=e-5;
    }
    void operator+()
        {
            h=h+10;
            m=m+10;
            e=e+10;
        }
    void operator *()
    {
        h=h*3;
        m=m*3;
        e=e*3;
    }
    
};

int main()
{
    math m1;

    m1.setdata();
    m1.printdata();
  
    -m1;
    m1.printdata();

    +m1;
    m1.printdata();

    *m1;
    m1.printdata();

  

}