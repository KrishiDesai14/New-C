#include<iostream>
using namespace std;
int main() {

    int a[100]={11,22,33,44,55,66,77,88,99};
    int b[100];
    int i,n=9,k=0;
    int max=0;

    for(i=0;i<=n;i++)
    {
        if(a[i]>max)
        {
            
            b[k]=a[i];
        }
    }

   for (i=0;i<k;i++)
    {
         cout<<endl<<"max number is=> "<<b[i];
    }

}