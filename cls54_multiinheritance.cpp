#include<iostream>
using namespace std;

class students
{
    private:
    int rno;
    char name;

    public:
    void setstudents()
    {
    cout<<endl<<"Enter students roll number=> ";
    cin>>rno;
    cout<<endl<<"Enter students name=> ";
    cin>>name;
    } 
    void printstudents()
    {
        cout<<endl<<" Roll number=> "<<rno<<" Name=> "<<name;
    }
};

class marks : public students
{
    protected:
    int eng, hin, math;

    public:

    void setmarks()
    {
        cout<<endl<<"Enter English marks=> ";
        cin>>eng;
        cout<<endl<<"Enter Hindi marks=> ";
        cin>>hin;
        cout<<endl<<"Enter maths marks=> ";
        cin>>math;

    }
    void printmark()
    {
        cout<<endl<<" English marks=> "<<eng<<" Hindi marks=> "<<hin<< " Maths marks=> "<<math;

    }
};

    class result : public marks
    {
        void printresult()
        {
            cout<<endl<<" Total=> "<<eng+hin+math;
        
        }
    };

    int main ()
    {
        result r1;

        r1.setstudents();
        r1.setmarks();
        r1.printstudents();
        r1.printmark();


    }
