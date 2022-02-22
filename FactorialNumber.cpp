#include<iostream>
using namespace std;

int main()
{
    int N,fac=1;
    cout<<"enter number : ";
    cin>>N;

    for(int j=1;j<=N;j++)
    {
        fac=fac*j;
    }

    cout<<"Factorial of "<<N<<" Number is = "<<fac;

    return 0;
}