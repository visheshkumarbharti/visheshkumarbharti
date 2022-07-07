#include<iostream>
using namespace std;
int main()
{
    int i,j, n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    {

        j=1;
        while(j<=n-i+1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
