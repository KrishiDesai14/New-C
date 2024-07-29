#include<iostream>
using namespace std;
int main() {

    int a[100]={22,33,44,55,66,77};
    int b[100];
    int c[100];
    int i,n=6;
    int k=0;

    for(i=0;i<=n;i++)
    {
        b[k]= a[i]*a[i];
        c[k]= a[i]* a[i]* a[i];
        k++;
    }

    for (i=0;i<k;i++)
    {
        cout<<endl<<" "<<b[i] <<  c[i];
    }
}