#include<iostream>
using namespace std;

class india
{
private:

int a;
public:
void setindia()
{
    cout<<endl<<"a= ";
    cin>>a;
}
void printindia()
{
    cout<<endl<<" a= "<<a;
}
};

class usa : public india
{
private:

int b;
public:
void setusa()
{
    cout<<endl<<"b= ";
    cin>>b;

}
void printusa()
{
    cout<<endl<<" b= "<<b;
}

};
int main() {

    usa u1;
    
    u1.setindia();
    u1.setusa();
    u1.printindia();
    u1.printusa();

}