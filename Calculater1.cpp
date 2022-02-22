#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char A;
    cout<<"ENTER FIRST NUMBER : ";
    cin>>a;
    cout<<"\nENTER SECOND NUMBER : ";
    cin>>b;
    cout<<endl;

    cout<<"ENTER what you want to perform : "<<endl;
    cout<<"1. ADDITION ( + )"<<endl;
    cout<<"2. MULTIPLICATION ( * )"<<endl;
    cout<<"3. SUSTRACTION ( - )"<<endl;
    cout<<"4. DIVISION ( / )"<<endl;
    cout<<"5. MODULAS ( % )"<<endl;
    cin>>A;

    switch (A)
    {
    case '+' :  
        cout<<"SUM IS = "<<a+b;
        break;

    case '*' :  
        cout<<"MULTIPLICATION IS = "<<a*b;
        break;

    case '-' :  
        cout<<"DIFFERIENCE IS = "<<a-b;
        break;

    case '/' :  
        cout<<"DIVISION IS = "<<a/b;
        break;

    
    default:
        cout<<"a mode b is = "<<a%b;
        break;
    }
}