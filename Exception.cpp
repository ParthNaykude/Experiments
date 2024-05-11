#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter the value of number 1 and number 2 : "<<endl;
    cin>>num1>>num2;
    cout<<endl;
    cout<<"start"<<endl;
    try
    {
        cout<<"Inside the try block"<<endl;
        if(num2==0)
        {
            throw num2;
            cout<<"Yhis Will not execute ";
        }
        else
        {
            float result=(float)num1/num2;
            cout<<"Division of Given numbers : "<<result<<endl;
        }
    }
    catch(int i)
    {
        
        cout<<"caught an exception trying to divide by zero : "<<endl;
        cout<<i<<endl;
    }
    cout<<"end"<<endl<<endl;

}
