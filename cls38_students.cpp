#include<iostream>
using namespace std;
class students
{
    private:
    int no;
    string name;
    static int x;

    public:

    void setdata();
    void printdata();

};

void students :: setdata()
{
    cout<<endl<<"Enter number => ";
    cin>>no;

    cout<<endl<<"Enter name=> ";
    cin>>name;
    x++;

}

void students :: printdata ()
{ 
    cout<<endl<<"Number=> "<<no<<"name=> "<<name<< "value of x=> "<<x;
}

int students ::x;
int main (){

    students s1,s2,s3;

    s1.setdata();
    s1.printdata ();
    s2.printdata ();
    s3.printdata ();

    s2.setdata();
    s1.printdata ();
    s2.printdata ();
    s3.printdata ();

    s3.setdata();
    s1.printdata ();
    s2.printdata ();
    s3.printdata ();

}
