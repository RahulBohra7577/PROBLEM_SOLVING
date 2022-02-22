#include<iostream>
using namespace std;

int main()
{
    int j=1;
    int arr[10];
    int i=0,n;

    cout<<" ENTER SIZE OF ARRAY : ";
    cin>>n;
    while(i<n)
    {
        arr[i]=1;
        i++;
    }
    i=0;
    while(i<n)
    {
        cout<<arr[i];
        i++;
    }

    return 0;
}