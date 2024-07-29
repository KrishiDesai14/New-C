#include<iostream>
using namespace std;
class weight
{
    int kg;
    
    public:

    weight(int x)
    {
        kg=x/100;
    }
    weight()
    {
        kg=0;
    }
    void weightprint()
    {
        cout<<endl<<"Kg=> "<<kg;
    }

};
int main ()
{
    weight w1;
    int gram= 200;
    cout<<endl<<" Gram=> "<<gram;

    w1= gram;

    w1.weightprint();
    return 0;
}