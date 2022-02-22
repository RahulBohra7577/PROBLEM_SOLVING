#include<iostream>
using namespace std;

int main()
{
    int N, sum=0;
    cout<<"enter number : ";
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        sum+=i;
    }

    cout<<"sum of "<< N<<" natural number is = "<<sum;

    return 0;
}