#include<iostream>
using namespace std;

class employee
{
    private:

    int no;
    char name[20];

    public:
    void setemployee()
    {
    cout<<endl<<"Enter employee number=> ";
    cin>>no;

    cout<<endl<<"Enter employee name=> ";
    cin>>name;
    }

    void printemployee()
    {
        cout<<endl<<"Employee number=> "<<no<<" Employee name=> "<<name;
    }
};

    class salarydepartment : public employee
    {
        protected:
        char dname;
        float basicsalary;

        public:
        void setsalarydepartment ()
        {
            cout<<endl<<"Enter Department name ( a for account, m for marketing, s for softwear) => ";
            cin>>dname;

            if( dname= 'a')
            {
                basicsalary = 10000;
            }
            else if( dname= 'm')
            {
                basicsalary = 20000;
            }
            else if( dname = 's')
            {
                basicsalary = 30000;
            }
        }

        void printsalarydepartment()
        {
            cout<<endl<<"\nDepartment=> "<<dname<<" basicsalary=> "<<basicsalary;
        }
    };

    class allowance
    {
        protected:
        float DA, HRA, MA;

        public:
        void setallowance()
        {
            cout<<endl<<" Enter % if DA=> ";
            cin>>DA;
            cout<<endl<<" Enter % if HRA=> ";
            cin>>HRA;
            cout<<endl<<" Enter % if MA=> ";
            cin>>MA;
        }
        void printallowance()
        {
            cout<<endl<<"DA=> "<<DA<<" HRA=> "<<HRA<<" MA=> "<<MA;
        }
    };

    class finalsalary : public salarydepartment, public allowance
    {
        public:
        void printfinalsalaey()
        {
            float tempDA, tempHRA, tempMA;
            cout<<endl<<" Basic salary=> "<<basicsalary;

            tempDA = basicsalary*DA/100;
            tempHRA = basicsalary*HRA/100;
            tempMA = basicsalary*MA/100;

            cout<<endl<<" DA=> "<<tempDA;
            cout<<endl<<" HRA=> "<<tempHRA;
            cout<<endl<<" MA=> "<<tempMA;
            cout<<"\n Final Salary = "<<basicsalary + tempDA + tempHRA + tempMA;


        }
    };

    int main ()
    {
        finalsalary f1;

        f1.setemployee();
        f1.setsalarydepartment();
        f1.setallowance();

        f1.printemployee();
        f1.printsalarydepartment();
        f1.printallowance();
        f1.printfinalsalaey();
    }

    

