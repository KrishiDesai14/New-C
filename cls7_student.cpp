#include<iostream>
using namespace std;

class students
{
    private:

    int no;
    string name;
    int eng, hin;

    public:
    students(int a,string b,int c, int d)
    {
        no=a;
        name=b;
        eng=c;
        hin=d;
    }
    void printdata(){

        cout<<endl<<" number= "<<no<<" name= "<<name<<" English marks= "<<eng<<" hindi marks= "<<hin;
    }
    };

    int main () {

        students s1(1,"krishi",76,88),s2(2,"rohan",99,67),s3(3,"Emily",99,99);

        s1.printdata();
        s2.printdata();
        s3.printdata();
    
    return 0;
    }



