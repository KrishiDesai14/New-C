#include<iostream>
using namespace std;
main ()
{
    int a[3][3];
    int i,j;
    int r,c;

    cout<<endl<<"enter number of rows=>";
    cin>>r;
    cout<<endl<<"enter number of colums=>";
    cin>>c;

    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            cout<<endl<<"Enter valye of a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }

    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
};