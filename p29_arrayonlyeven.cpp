#include<iostream>
using namespace std;
int main () {

    int a[100]= {11,22,33,44,55,66,77,88,99,98};
    int b[100];
    int i,n=10;
    int k=0;

    for(i=0;i<=n;i++)
    {
        if(a[i]%2==0)
        {
            b[k]=a[i];
            k++;
            
        }

        for (i=0;i<k;i++)
    {
         cout<<endl<<"Even number is=> "<<b[i];
    }

}
}