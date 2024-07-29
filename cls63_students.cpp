#include<iostream>
using namespace std;

class students
{ 
    private:
    int num;
    string name;
    int eng,hin;

    public:
    students(int a, string b, int c, int d)
    {
        num=a;
        name=b;
        eng=c;
        hin=d;
    }
    void printdata()
    {
        cout<<endl<<"Enter students number=> "<<num<<" name=> "<<name<<" English marks=> "<<eng<<" hindi marks=> "<<hin;
    }

};
int main ()
{

    students s1(1,"rohan",80,90), s2(2,"vraj",90,65), s3(3,"Dhruv", 10,44);

    s1.printdata();
    s2.printdata();
    s3.printdata();

}