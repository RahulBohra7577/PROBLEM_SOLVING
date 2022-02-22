#include<iostream>
using namespace std;

int main()
{
    int n,m,i=0,mask=0,ans=0;
    cout<<"ENTER YOUR NUMBER : ";
    cin>>n;

    m=n;

    if(n==0)
        cout<<"compliment of "<<n<<" is : "<<1;
    while(m!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;

    }
    

    ans=(~n) & mask;
    cout<<"compliment of "<<n<<" is : "<<ans;

}