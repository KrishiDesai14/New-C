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

    void static printcnt()
    {
        cout<<endl<<" Count = "<<x;
    }
};

void students :: setdata()
{

    cout<<endl<<"Enter name=> ";
    cin>>name;
    x++;
    no=x;
}

void students :: printdata ()
{ 
    cout<<endl<<" Number=> "<<no<<" name=> "<<name;
}

int students ::x;
int main (){

    students s1,s2,s3;

    s1.setdata();
    s2.setdata();
    s3.setdata();
    s1.printdata ();
    s2.printdata ();
    s3.printdata ();

    students :: printcnt();

}
