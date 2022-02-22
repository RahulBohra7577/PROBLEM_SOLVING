#include<iostream>
#include<math.h>
using namespace std;

int main()
{
     int n,digit,result=0,i=0;
     cout<<"enter your number : ";
     cin>>n;

     while(n!=0)
     {
        digit=n%10;
        if(digit==1)
        {
            result=( result + pow(2,i) );
        }

        i++;
        n=n/10;
     }

     cout<<result;

      return 0;
}