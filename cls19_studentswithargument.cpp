#include<iostream>
using namespace std;

class students{

    private:
    int no;
    string name;

    public:
    students()
    {
        no=34;
        name=rohan;
    }
    students(int x, string y)
    {
        no=x;
        string = y;
    }

    void printstudents ()
    {
        cout<<endl<<"Student number=> "<<no<<"Student name=> "<<name;

    }


};

class marks : public students
{
    private:
    int e,h;

    public:
    marks(){

        e=22;
        h=33;
    }
    marks(int x,int y,int z)
    {
        e=x;
        h=y;
    }

    

    void printmarks() {

        cout<<endl<<" English marks= "<<e<<" Hindi marks = "<<h;
    }

};
int main (){

    marks m1,m2,m3(3,4),m4(11,34);

    m1.printmarks();
    m2.printmarks();
    m3.printmarks();
    m4.printmarks();

}

