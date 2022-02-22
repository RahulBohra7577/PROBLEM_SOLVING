#include<iostream>
using namespace std;

int Count_Set_Bit()
{
    int num,count=0;
    cout<<" ENTER NUMBER : ";
    cin>>num;

    while(num!=0)
    {
        if((num%2)&1)
        {
            count=count+1;

        }

        num >> 1;
    }

    return count;
}

int main()
{
    int num1,num2,Set_bit_count=0;
    //cout<<" ENTER FIRST NUMBER : ";
    //cin>>num1;
    //cout<<" ENTER SECOND NUMBER : ";
    //cin>>num2;

    num1=Count_Set_Bit();
    num2=Count_Set_Bit();
    Set_bit_count=num1+num2;


    cout<<" NUMBER OF SET BITS IN GIVEN NUMBERS : "<<Set_bit_count;

    return 0;

}