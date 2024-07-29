#include<iostream>
using namespace std;

class bank
{
    private:

    int anum;
    string aname;
    int balance;


    public:

    void setdata(){

    cout<<endl<<"Enter account number=> ";
    cin>>anum;
    cout<<endl<<"Enter account name=> ";
    cin>>aname;
    cout<<endl<<"Enter balance => ";
    cin>>balance;
}

void printdata()
{
    cout<<endl<<"account number "<<anum<<" account name "<<aname<<" balance "<<balance;

}
};
int main () {

    bank b1,b2,b3;
    b1.setdata();
    b2.setdata();
    b3.setdata();

    b1.printdata();
    b2.printdata();
    b3.printdata();

return 0; 
}


