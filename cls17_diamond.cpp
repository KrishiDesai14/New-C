#include<iostream>
using namespace std;

class students
{
    private:
    int no;
    string name;

    public:
    void setstudents()
    {
        cout<<endl<<"Enter student number= ";
        cin>>no;
        cout<<endl<<"Enter name= ";
        cin>>name;
    }
    void printstudents()
    {
        cout<<endl<<"student number= "<<no<<" name= "<<name;
    }
};

class marks : public virtual students
{
    protected:
    int e,h;
    public:

    void setmarks()
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
class sports : public  virtual students
{
    protected:
    int cricket;

    public:
    void setcricket ()
    {
        cout<<endl<<"Enter cricket score= ";
        cin>>cricket;
    }
    void printcricket() {
        cout<<endl<<"cricket score= "<<cricket;
    }

};
class result : public marks , public sports
{
    public:
    void printresult()
    {
        cout<<endl<<"Total= "<<e+h+cricket;
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