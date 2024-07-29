#include<iostream>
using namespace std;

class students
{
    private:
    int no;
    string name;

    public:
    students(int a,string b)
    {
        no=a;
        name=b;
    }

    void printstudents()
    {
        cout<<endl<<"student number=> "<<no<<"student name=> "<<name;

    }

    };

    class marks : public students
    {
        private:
        int e,h;

        public:
        marks(int c, int d)

        {
            e=c;
            h=d;
        }

        void printmarks()
        {
            cout<<endl<<"English marks=> "<<e<< "hindi marks=> "<<h;
        }
    };

    class result : public marks, public students
    {
        public:
        void printresult()
        {
            cout<<endl<<"number=> "<<a<<"name=> "<<b<<" English marks=> "<<c<<"Hindi marks=> "<<d;

        }
    };

    int main () {

        result r1(1,"krishi",76,88),r2(2,"rohan",99,67),r1(3,"Emily",99,99);

        r1.printstudents();
        r1.printmarks();
        r1.printresult();
    
    return 0;
    }



