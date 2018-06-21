#include <iostream>

using namespace std;
class stack{
    struct node{
        int i;
        node *next;
    }*ptr,*newptr,*a;
    node *create_node(int data){
    ptr=new node;
    ptr->i=data;
    ptr->next=NULL;
    return ptr;
    }
    public:
    node *top;
    void push(int d);
    void pop();
    bool isempty();
    void display(node *np){
        while(np!=NULL){
            cout<<np->i;
            np=np->next;
        }
        cout<<"\n";
    }
    };
    void stack::push(int d){
        newptr=create_node(d);
        if(isempty()){top=newptr;}
        else{
            newptr->next=top;
            top=newptr;
        }
            
    }
    void stack::pop(){
         if(isempty()){cout<<"underflow";}
    else{
        a=top;
        top=top->next;
        delete a;
    }
    }
    bool stack::isempty(){
        if(top==NULL){return true;}
        else return false;
    }
    
int main()
{
   stack s1;
   int j;
   char choice='y';
   while(choice=='y'||choice=='Y'){
       cin>>j;
       s1.push(j);
       cin>>choice;
   }
   s1.display(s1.top);
   s1.pop();
   s1.display(s1.top);
   
   return 0;
}