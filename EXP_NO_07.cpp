#include<iostream>
using namespace std;

class overloading
{
    int a;
    public :
    void getdata()
    {
        cout<<"Enter a Number : "<<endl;
        cin>>a;
    }
    void putdata()
    {
        cout<<"value of a = "<<a<<endl;
        
    }
    overloading operator+(overloading BB)
    {
        overloading CC;
        CC.a=a+BB.a;
        return CC;
    }
    
};
int main()
{
    overloading AA,BB,CC;
    AA.getdata();
    BB.getdata();
    CC=AA+BB;
    AA.putdata();
    BB.putdata();
    CC.putdata();
    return 0;
}
