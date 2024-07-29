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

    timee add(timee t2)
    {
        timee t3;
        t3.h=h+t2.h;
        t3.m=m+t2.m;
        if(t3.m>=h)
        {
            t3.m=m-60;
            t3.h=h+1;
        }
    }
};

int main ()
{
    timee t1, t2, t3;

    t1.settimee();
    t2.settimee();
    t1.printtimee();
    t2.printtimee();
    t3= t1.add(t1);
    t3.printtimee();
    
    return 0;
}


