#include<iostream>
using namespace std;

class number
{ 
    private:
    int num;

    public:
    void setnumber()
    {
        cout<<" Enter number=> ";
        cin>>num;
    }
    void printnumber()
    {
        num++;

    }
};
int main()
{
    number n1;

    n1.setnumber();
    n1.printnumber();
    n1.printnumber();
}