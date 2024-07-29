#include<iostream>
using namespace std;

class math
{
    private:
    int a,c,b;

    public:
    math(){

        a=22;
        b=33;
        c=44;
    }
    math(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void printdata() {

        cout<<endl<<" number 1= "<<a<<" number 2= "<<b<<" number 3= "<<c;
    }
};
int main (){

    math m1,m2,m3,m4(3,4,5),m5(11,34,45);

    m1.printdata();
    m2.printdata();
    m3.printdata();
    m4.printdata();
    m5.printdata();




}

