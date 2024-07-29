#include<iostream>
using namespace std;

class math
{

    private:

    int no1;
    int no2;

    public:

    void setdata() {

    cout<<endl<<"Enter number 1 => ";
    cin>>no1;
    cout<<endl<<"Enter number 2 => ";
    cin>>no2;

    }

    void add()
    {
        cout<<endl<<"addition=> "<<no1+no1;
    }
    void sub()
    {
        cout<<endl<<"sub=> "<<no1-no1;
    }
    void multi()
    {
        cout<<endl<<"multi=> "<<no1*no2;
    }
    void div()
    {
        cout<<endl<<"div=> "<<no1/no2;
    }

    void printdata()
    {
        cout<<endl<<" add "<<add<<" sub "<<sub<<" multi "<<multi<<" div "<<div;
    }
};
int main () {

    math m1,m2,m3,m4,m5;
    m1.setdata();
    m2.setdata();
    
    m1.printdata();
    m2.add();
    m3.sub();
    m4.multi();
    m5.div();


    return 0;
}
