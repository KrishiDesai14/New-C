#include<iostream>
using namespace std;

class multi
{
    private:
    int x,y;

    public:
    void setmulti()
    {
        cout<<endl<<" Enter value of x=> ";
        cin>>x;
        cout<<endl<<" Enter value of y=> ";
        cin>>y;
    }
    void printmulti()
    {
        cout<<endl<<" x=> "<<x<<" y=> "<<y<< " Multiplication of x and y is=> "<<x*y;
    }

};
int main()
{
    multi m1;

    m1.setmulti();
    m1.printmulti();
}