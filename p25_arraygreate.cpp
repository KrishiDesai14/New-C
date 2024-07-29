#include<iostream>
using namespace std;
int main () {

    
    int a[100]={11,33,44,55,67,88};
    int n=6,i;
    int min=0,max=0;

    for(i=0;i<=6;i++)
    {
        if(max > min)
        {
            cout<<endl<<"smallest number is=> "<<max;
        }
        else if(min<max)
        {
            cout<<endl<<"greatest number is=> "<<min;
        }
    }




    


}
