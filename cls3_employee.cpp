#include<iostream>
using namespace std;


   class employee
   {
    private:

    int eno;
    string ename;
    int esalary;

    public:

    void setdata(){

    cout<<endl<<"Enter employee number=> ";
    cin>>eno;
    cout<<endl<<"Enter employee name=> ";
    cin>>ename;
    cout<<endl<<"Enter employee salary=> ";
    cin>>esalary;

    }

    void printdata ()
    {
        cout<<endl<<"Employee number "<<eno<<" employee name "<<ename<<" employee salary "<<esalary;

   }
};

int main () {
    employee e1,e2,e3;
    e1.setdata();
    e2.setdata();
    e3.setdata();

    e1.printdata();
    e2.printdata();
    e3.printdata();

return 0; 
}