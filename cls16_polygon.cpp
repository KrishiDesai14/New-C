#include<iostream>
using namespace std;

class polygon
{
    protected:
    int h,b;

    public:
    void setpolygon()
    {
        cout<<endl<<"Enter height=> ";
        cin>>h;
        cout<<endl<<"Enter base=> ";
        cin>>b;
    }
    void printpolygon()
    {
        cout<<endl<<"height=> "<<h<<"base=> "<<b;
    }

};

class triangle : public polygon
{
    public:
    void printtriangle()
    {
        cout<<endl<<"Triangle=> "<<h*b*0.5;
    }

};

class rectangle : public polygon
{
    public:
    void printrectangle()
    {
        cout<<endl<<"rectangle=> "<<h*b;
    }

};

int main ()
{
    triangle t1;
    rectangle r1;

    t1.setpolygon();
    t1.printpolygon();
    t1.printtriangle();
    r1.printrectangle();

}
