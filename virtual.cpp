#include <iostream>
using namespace std;

class person 
{
public:
string name ;
int age ;
virtual void info()
 {
     cout<<"enter the name "<<endl;
     cin>>name;
     cout<<"enter the age"<<endl;
     cin>>age;
 }
virtual  void display()
 {
     cout<<"Name"<<name<<endl;
     cout<<"Age"<<age<<endl;
 }

};

class customer:virtual public person{
    public :
    string c_ID;
  virtual  void info()  {
        person::info();
        cout<<"enter the customer id "<<endl;
        cin>>c_ID;
    }
   virtual  void display()  {
        person::display();
        cout<<" customer id"<<c_ID<<endl;
    }
    
};

class employee :virtual  public person
{
public:
string E_ID;

virtual void info(){
    person::info();
    cout<<"enter the employee id ";
    cin>>E_ID;
}
virtual void display()
{
  person::display();
  cout<<" employee ID "<<E_ID;

}
 
};

int main() 
{
    person p;
    customer c;
    employee e;

     
    person* ptr;
    ptr= &e;
    ptr->info();
    ptr->display();
    cout<<""<<endl;
    
    ptr=&c;
    ptr->info();
    ptr->display();
    return 0;
    
}
