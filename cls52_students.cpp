#include<iostream>
using namespace std;
class students
{
    
    int rno;
    char name[20];
    int eng, hin;

    public:
    void setstudents()
    {
        cout<<endl<<"Enter roll no=> ";
        cin>>rno;

        cout<<endl<<"Enter name=> ";
        cin>>name;

        cout<<endl<<"Enter English marks=> ";
        cin>>eng;

        cout<<endl<<"Enter hindi mark=> ";
        cin>>hin;
    }

    void printdata()
    {
        cout<<endl<<"Roll no=> "<<rno<<" Name=> "<<name<<" Endlish marks=> "<<eng<<" Hindi marks=> "<<hin;
    }
    int getEnglish()
    {
        return eng;
    }
    int getHindi()
    {
        return hin;
    }
};

class marks
{

    int total;
    public:
    marks()
    {
        total=0;
        
    }
    marks(students s1)
    {
        total= s1.getEnglish()+s1.getHindi();
    }
    void printTotal()
    {
    cout<<"\nTotal = "<<total;
    }

};
int main()
{
students s1;
marks m1; 

s1.setstudents();
m1=s1;
m1.printTotal(); 
return 0;
}