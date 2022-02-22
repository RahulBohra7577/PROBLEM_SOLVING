#include<iostream>
#include<math.h>
using namespace std;

int main()
{
     int n,bit,answer=0,i=1;
     cout<<"enter your number : ";
     cin>>n;

     while(n!=0)
     {
        bit = n & 1;
        answer = ( bit * pow(10,i) ) + (answer);
        ++i;
        n = n >> 1;

          
     }

     cout<<answer;

      
}