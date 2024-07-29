#include<iostream>
using namespace std;

class movie
{
 private: //access specifier

    int mid; //data members
    string mname;
    int income;

public:
    void setdata() //data functions
    {
        cout<<endl<<"Enter mid =>";
        cin>>mid;
        cout<<endl<<"Enter movie name =>";
        cin>>mname;
        cout<<endl<<"Enter income =>";
        cin>>income;
        
    }
    void printdata()
    {
        cout<<endl<<"Movie id "<<mid<<" Movie name " <<mname <<" Income "<<income;
    }
};


int main () {

movie m1,m2,m3;
m1.setdata();
m2.setdata();
m3.setdata();

m1.printdata();
m2.printdata();
m3.printdata();

return 0;
}