#include<iostream>
using namespace std;
int main()
{

    int a[3],i,s;
    for(i=1;i<=2;i++)
    {

        cout<<"enter"<<i<<"number:";
        cin>>a[i];

    }
    i=0;
    if(a[i]>a[i+1]&&a[i]>a[i+2])
        cout<<a[i]<<"is greatest";
    else if(a[i+1]>a[i]&&a[i+1]>a[i+2])
        cout<<a[i+1]<<"is greatest";
    else
        cout<<a[i+2]<<"is greatest";
    return 0;
}
