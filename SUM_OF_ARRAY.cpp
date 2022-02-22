#include<iostream>
using namespace std;

int n,sum;
int ARR_SUM(int arr[],int n)
{
    int i=0;
    while(i<n)
    {
        sum=sum+arr[i];
        i++;
    }
    return sum;
}
int main()
{
    int arr[100];

    cout<<"ENTER SIZE OF ARRAY : ";
    cin>>n;
    int i=0;
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }

    sum = ARR_SUM(arr,n);

    cout<<"SUM OF ALL ELEMENTS OF ARRAY IS = "<<sum;

    return 0;

}