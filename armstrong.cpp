#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int n,sum=0;
    cin>>n;
    int originaln=n;
    while(n>0)
    {

        int lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10;


    }
    if(sum==originaln)
    {

        cout<<"the number is armstrong"<<endl;
    }
    else
    {

        cout<<"the number is not armstrong";
    }
}
