#include<iostream>
using namespace std;

int REVERSE(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main()
{
    int j=1;
    int arr[10];
    int i=0,n;

    cout<<" ENTER SIZE OF ARRAY : ";
    cin>>n;
    cout<<" ENTER ELEMENTS :\n";
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    i=0;
    cout<<"YOUR INPUT IS : ";
    while(i<n)
    {
        cout<<arr[i]<<"  ";
        i++;
    }

    arr[n]=REVERSE(arr,n);

    i=0;
    cout<<"\nREVERSE OF THE INPUT IS : ";
    while(i<n)
    {
        cout<<arr[i]<<"  ";
        i++;
    }

}