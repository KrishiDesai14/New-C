#include<iostream>
using namespace std;
int main() {

    int a[100]={11,33,55,67,87};
    int b[100];
    int n=5,i;
    int k=0;

    for(i=0;i<=n;i++)
    {
        b[k]=a[i]*a[i];
        k++;
    }
       for (i=0;i<k;i++)
    {
        cout<<endl<<" "<<b[i];
    }
}