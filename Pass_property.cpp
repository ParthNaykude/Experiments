#include<iostream>
using namespace std;

class father
{
public :
int father_pr,pass_pr;

void father_property()
{
    cout<<"Enter the Property of Father"<<endl;
    cin>>father_pr;
    
}
void dispaly_pr()
{
    cout<<"the total property of father is : "<<father_pr<<endl;
}
void decision()
{
    string choice;
    cout<<"father wants to pass property (yes/no)"<<endl;
    cin>>choice;
     if(choice=="yes"||choice =="Yes")
     {
        pass_pr=father_pr; 
     }
     else 
     {
     pass_pr=0;
     
     }
}};

class son : public father
{
public :
int son_pr,pass_spr;
void son_property()
{
    cout<<"Enter the property of son : "<<endl;
    cin>>son_pr;
    
}
void display_spr()
{
    cout<<"The sons Property "<<son_pr + pass_pr<<endl;

}
void decision_s()
{
    string choice ;
    cout<<"son wants to Pass property (yes/no) "<<endl;
    cin>>choice;
    if(choice == "yes"||choice == "Yes")
    {
        pass_spr=son_pr;
    }
    else 
    {
        pass_spr=0;
    }
}};

class grandson : public son
{
    public :
    int grandson_pr,total_gpr;
    void grandson_property()
    {
        cout<<"enter the property of grand son :"<<endl;
        cin>>grandson_pr;
        
    }
    void display_gpr()
    {
        cout<<"Property of grandson "<<grandson_pr + pass_spr<<endl;
        
    }
};

int main()
{
    grandson g;

    g.father_property();
    g.decision();
    g.son_property();
    g.decision_s();
    g.grandson_property();
    
    g.dispaly_pr();
    g.display_spr();
    g.display_gpr();
    return 0;
    
}
