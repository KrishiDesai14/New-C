#include<iostream>
using namespace std;

class employee
{
    private:

    int no;
    string name;
    int salary;

    public:
    employee(int a, string b, int c)
    {
        no=a;
        name=b;
        salary=c;
    }
    void printdata()
    {
        cout<<"number= "<<no<<"name= "<<name<<"salary= "<<salary;
    }
};

int main () {

    employee e1(1,"krishi",195000), e2(2,"natasha",87000),e3(3,"mahi", 43000);

return 0;
}
