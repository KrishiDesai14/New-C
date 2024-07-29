#include<iostream>
using namespace std;

int main ()
{
    try
    {
        int english, hindi;

        cout<<endl<<"Enter english marks=> ";
        cin>>english;

        cout<<endl<<"Enter hindi marks=> ";
        cin>>hindi;

        if (english>0)
        {
            throw 0;
        }
        else if (hindi > 0)
        {
            throw 1.1;
        }
        else
        {
            cout<<endl<<"Total marks=> "<<english + hindi;
        } 
    }
    catch (int x)
    {
        cout<<endl<<" Enter valid marks in english";
    }
    catch (double x)
    {
        cout<<endl<<" Enter valid marks in hindi";
    }

    return 0;
    
};

