#include<iostream>
using namespace std;
class weight
{
    
    int grams;

    public:
    weight()
    {
        grams = 0;
    }
    weight(int g)
    {
        grams=g;
    }
    void showData()
    {
        cout<<endl<<"gram=> "<<grams;

    }
   operator float()
   {
    return grams/100;
   }

};
int main ()
{
    weight w1(5000);
    w1.showData();

    float kg=w1;
    cout<<endl<<"Kg=> "<<kg;

    return 0;

}