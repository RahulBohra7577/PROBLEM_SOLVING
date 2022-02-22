#include<iostream>
using namespace std;

int main()
{
    float p,r, SI;
    int t;
    cout<<"Enter Principle Amount : ";
    cin>>p;
    cout<<"Enter rate of Interest : ";
    cin>>r;
    cout<<"Enter Time Period : ";
    cin>>t;

    SI=(p*r*t)/100;
    cout<<"Simple Interest is = "<<SI;



    return 0;
}