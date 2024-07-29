#include<iostream>
using namespace std;

class student
{
    int rno;
    char name[20];

    public:
    friend ostream &operator<<( ostream &output,student &s1 );
    friend istream &operator>>( istream &input,student &s1 );
};

ostream &operator<<( ostream &output, student &s1)
{
   output << "\nRollno : " << s1.rno << " Name : " << s1.name;
   return output;
}

istream &operator>>( istream &input, student &s1 ) {
cout<<"\nEnter rollno =>"; input>> s1.rno; 
cout<<"\nEnter name =>"; input>>s1.name;
return input;

 }
int main() 
{
student s1;
cin>>s1; cout<<s1;

return 0; 
}





