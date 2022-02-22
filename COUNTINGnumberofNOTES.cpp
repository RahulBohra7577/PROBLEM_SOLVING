#include<iostream>
using namespace std;

int main()
{
    int a,num1,num2,num3,num4;
    cout<<"ENTER TOTAL AMOUNT : ";
    cin>>a;

    switch (int i=1)
    {
    case 1:
        num1=a/100;
        a=a%100;
    
    case 2:
        num2=a/50;
        a=a%50;
    
    case 3:
        num3=a/20;
        a=a%20;
    
    default:
        num4=a;
        break;
    }

    cout<<" TOTAL MINMUM NUMBER OF NOTES REQUIRED : ";
    cout<<num1+num2+num3+num4;
}
