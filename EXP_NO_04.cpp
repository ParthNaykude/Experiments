#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* ptr;
	};
	
class List{
	private: Node* head;
	public: List(){
		head = NULL;
	}
	
	public: void insert(int d){
		Node* newNode = new Node;
		newNode->data = d;
		newNode->ptr=head;
		head=newNode;
	}
	
    public:	void display(){
		Node* current = head;
        while (current != NULL) {
            cout << current->data <<endl;
            current = current->ptr;
        }
        cout << endl;
	      }
	 
	public:	void search(int x){
		   Node* srh = head;
                           while (srh != NULL) {
                                  if(x==srh->data){
                                      cout << srh->data<<"is present" <<endl;
                                      break;
                                     }
                            srh = srh->ptr;
                            }
                            if(x!=srh->data){
                            cout<<"data is not present ";
                             }
             cout << endl;
       	}     
	      
};	

int main(){
	List l;
	int n,i;
	cout<<"Enter no of node you want to add in list=";
	cin>>n;
	
	int m=1;
	for(i=0;i<n;i++){
	int d;
	cout<<"enter your "<<m<<"no. Node data=";
	cin>>d;
	l.insert(d);
	m++;
	}
	
	
	cout<<"Your list is"<<endl;
	l.display();
	
	int x;
	cout<<"enter the data you want to search";
	cin>>x;
	l.search(x);

}
