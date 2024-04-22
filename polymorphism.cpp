#include<iostream>
using namespace std;

class classbase
{
public :
         int B_var=10;
	//virtual void display()
	void display()
		{

		cout<<"The function of classbase  : "<<B_var;
		}
};
class classderive :public classbase
{
public :

	int D_var=100;
	void display()
		{
		cout<<"the function dispaly of  derived class   : "<<D_var<<endl<<endl;

		}
};
int main ()
{
	classbase B_obj;
	classderive D_obj;
	classbase *ptr;
	ptr=&D_obj;
	ptr-> display();
	return 0;
}
