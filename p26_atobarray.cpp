#include<iostream>
using namespace std;
int main () {

    int a[100]= {11,22,33,44};
    int b[100];
    int i,n=4;
    int k=0;

    for(i=0;i<=n;i++)
    {
        b[k]=a[i];
        k++;
    }

    for (i=0;i<k;i++)
    {
        cout<<endl<<" "<<b[i];
    }
}
