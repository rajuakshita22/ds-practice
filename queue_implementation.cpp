#include <iostream>

using namespace std;
struct node{
        int i;
        node *next;
    }*ptr,*newptr,*a,*rear,*front;
class queue{
    node *create_node(int data){
    ptr=new node;
    ptr->i=data;
    ptr->next=NULL;
    return ptr;
    }
    public:
    void enqueue(int d);
    void dequeue();
    bool isempty();
    void display(node *np){
        while(np!=NULL){
            cout<<np->i;
            np=np->next;
        }
        cout<<"\n";
    }
    };
    void queue::enqueue(int d){
        newptr=create_node(d);
        if(isempty()){front=rear=newptr;}
        else{
            rear->next=newptr;
            rear=newptr;
        }
            
    }
    void queue::dequeue(){
         if(isempty()){cout<<"underflow";}
    else{
        a=front;
        front=front->next;
        delete a;
    }
    }
    bool queue::isempty(){
        if(front==NULL){return true;}
        else return false;
    }
    
int main()
{
   queue q1;
   int j;
   char choice='y';
   while(choice=='y'||choice=='Y'){
       cin>>j;
       q1.enqueue(j);
       cin>>choice;
   }
   q1.display(front);
   q1.dequeue();
   q1.display(front);
   
   return 0;
}