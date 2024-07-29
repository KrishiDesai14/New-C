#include<iostream>
using namespace std;

class students
{
    private:

    int no;
    string name;
    int eng;

    public:
    students(int a, string b, int c){
        no=a;
        name=b;
        eng=c;

        cout<<endl<<" in constructor";
    }
    void printdata() {

        cout<<endl<<"number= "<<no<< " name = "<<name<<" English marks= "<<eng;
    }   
    ~students()
    {
        cout<<endl<<"bye";
    }
};

int main (){
    students s1(1,"krishi",98),s2(2,"Rohan", 88),s3(3,"natasha", 44);

    s1.printdata();
    s2.printdata();
    s3.printdata();
return 0;

}

