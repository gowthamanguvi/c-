#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number";
    cin>>a;
    if(1<=a && a<=100000)
    {
        if(a==0)
        {
            cout<<"it is zero";
        }
        else if(a>0)
        {
            cout<<"\nPositive";
        }
        else
        {
            cout<<"\nNegative";
        }
    }
    else{
        cout<<"\ninvalid input";
    }
}
