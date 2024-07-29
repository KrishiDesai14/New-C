#include<iostream>
using namespace std;

class students
{
    private:

    int sno;
    string sname;
    int std;
    int emarks;
    int hmarks;

    public:

    void setdata()
    {
        cout<<endl<<"Enter students roll number=> ";
        cin>>sno;
        cout<<endl<<"Enter students name=> ";
        cin>>sname;
        cout<<endl<<"Enter students grade=> ";
        cin>>std;
        cout<<endl<<"Enter students English marks=> ";
        cin>>emarks;
        cout<<endl<<"Enter students Hindi marks=> ";
        cin>>hmarks;
    }
    void printdata()
    {
        cout<<endl<<" Roll number "<<sno<<" name " <<sname<<" grade "<<std<<" English marks "<<emarks<<" hingi marks "<<hmarks;
    }
};
int main () {

    students s1,s2,s3,s4,s5;
    s1.setdata();
    s2.setdata();
    s3.setdata();
    s4.setdata();
    s5.setdata();

    s1.printdata();
    s2.printdata();
    s3.printdata();
    s4.printdata();
    s5.printdata();

   return 0;
     
}