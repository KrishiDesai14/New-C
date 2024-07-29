#include<iostream>
using namespace std;

class students
{
    protected:

    int num;
    char name;

    public:
    void setstudents()
    {
        cout<<endl<<" Enter student number=> ";
        cin>>num;
        cout<<endl<<" Enter students name=> ";
        cin>>name;
    }
    void printstudents()
    {
        cout<<endl<<"students number=> "<<num<<" srudents name=> "<<name;
    }
};
class marks : public students
{
    protected:
    int eng,hin;

    public:
    void setmarks()
    {
        cout<<endl<<"Enter english marks=> ";
        cin>>eng;
        cout<<endl<<" Enter Hindi marks=> ";
        cin>>hin;
    }
    void printmarks()
    {
        cout<<endl<<" Endlish marks=> "<<eng<<" Hindi marks=> "<<hin;
    }
};

class result : public marks, public students
{
    void printdata()
    {
        cout<<endl<<" Total marks=> "<<eng+hin;
    }
};
