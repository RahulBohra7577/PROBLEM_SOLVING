#include<iostream>
using namespace std;

int main()
{
    int num1 , i=2 , j=0;
    cout<<"Enter your Number : ";
    cin>>num1;
    for(i;i<num1;i++)
        {
            if(num1%i==0)
            {
                j=1;
                break;
            }
        }
    
     if(j)
        cout<<num1 <<"  Given number is not Prime !";
    else
        cout<<num1 <<"  Given number is Prime !";

    return 0;
}