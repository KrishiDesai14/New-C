#include<iostream>
using namespace std;

class students
{
    protected:
    int no;
    string name;

    public:
    void setstudents()
    {
         cout<<endl<<"Enter number = ";
        cin>>no;

        cout<<endl<<"Enter name = ";
        cin>>name;
    }
    void printstudents()
    {
        cout<<endl<<"Enter number= "<<no<< "Enter name= "<<name;
    }
    };

    class marks
{
    protected:
    int e,h;

    public:

    void setmarks ()
    {
        cout<<endl<<"Enter English marks= ";
        cin>>e;

        cout<<endl<<"Enter Hindi maeks= ";
        cin>>h;

    }
    void printmarks () 
    {
        cout<<endl<<"English marks = "<<e<<"Hindi marks = "<<h;
    }

};
class result : public marks , public students
{
    public:
    void printresult()
    {
        cout<<endl<<"Total= "<<e+h;
    }
};

int main () 
{
    result r1;

    r1.setstudents ();
    r1.setmarks ();
    r1.printstudents();
    r1.printmarks();
    r1.printresult();

    return 0;

}