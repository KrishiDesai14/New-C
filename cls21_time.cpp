#include<iostream>
using namespace std;
class timee
{
    private:
    int h,m;

    public:
    void settimee()
    {
    cout<<endl<<"Enter h=>";
    cin>>h;
    cout<<endl<<"Enter t=>";
    cin>>m;
    }

    void printtimee()
    {
        cout<<endl<<"hour => "<<h<<"time => "<<m;

    }

    void add(timee t1, timee t2)
    {
        h=t1.h+t2.h;
        m=t2.m+t2.m;
    }
};

int main ()
{
    timee t1, t2, t3;

    t1.settimee();
    t2.settimee();
    t1.printtimee();
    t2.printtimee();
    t3.add(t1,t2);
    t3.printtimee();
    
    return 0;
}


