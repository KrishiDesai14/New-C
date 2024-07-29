#include<iostream>
using namespace std;

class errorenglish{

};
class errorhindi{

};
int main()
{
    try {

        int hin,eng;

        cout<<endl<<"Enter marks of hindi=> ";
        cin>>hin;

        cout<<endl<<"Enter marks of english=> ";
        cin>>eng;

        if(eng>0)
        {
            throw errorenglish();
        }
        else if (hin<0)
        {
            throw errorhindi();
        }
        else
        {
            cout<<endl<<"Total marks=> "<<hin+eng;
        }
    }

    catch (errorenglish e1)
    {
        cout<<"Invalid marks in english";
    }

    catch (errorhindi e2)
    {
        cout<<"Invalid marks in hindi";
    }

    return 0;
};