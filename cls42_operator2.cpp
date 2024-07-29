#include<iostream>
using namespace std;
class number
{
    private:
    int a,b;

    public:

    void setdata()
    {
        cout<<endl<<"Enter number 1=> ";
        cin>>a;

        cout<<endl<<"Enter number 2=> ";
        cin>>b;
    }

    void printdata()
    {
        cout<<endl<<" Number 1=> "<<a<<" Number 2=> "<<b;
    }

    number operator+(number n2)
    {
        number n3;
        n3.a=a+n2.a;
        return n3;
        
    }

};
int main()
{
    number n1,n2,n3 ;

    n1.setdata();
    n2.setdata();
    n1.printdata();
    n2.printdata();

    n3 = n1+n2;
    n3.printdata();

}