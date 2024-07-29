#include<iostream>
using namespace std;

class students
{
    protected:
    string name;
    int num;

    public:
    void setstudents()
    {
        cout<<endl<<" Enter students number=> ";
        cin>>num;

        cout<<endl<<" Enter students name=> ";
        cin>>name;
    }

    void printstudents()
    {
        cout<<endl<<" Students number=> "<<num<<" students name=> "<<name;
    }
};

class marks : public students
{
    protected:
    int x;
    int y;

    public:
    void setmarks()
    {
        cout<<endl<<" Enter english marks=> ";
        cin>>x;

        cout<<endl<<" Enter maths marks=> ";
        cin>>y;
    }
    void printmarks()
    {
        cout<<endl<<" English marks=> "<<x<<" maths marks=> "<<y;
        
    }

};
class result : public marks
{
    public:
    void printresult()
    {
        cout<<endl<<" Total marks=> "<<x+y;

    }
};
int main ()
{
    result r1;

    r1.setstudents();
    r1.setmarks();

    r1.printstudents();
    r1.printmarks();

    r1.printresult();
}