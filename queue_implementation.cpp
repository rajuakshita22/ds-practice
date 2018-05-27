#include <iostream>
#include <math.h>
using namespace std;

struct node{
    int data;
    node *next;
}*ptr,*newptr,*front,*rear,*a;
node *create_node(int);
void enqueue(node*);
void dequeue();
void display_queue(node *);
int main() 
{
    int i;
    char y='y',x='y';
    while(y=='y'||y=='Y')
    {
        cin>>i;
        newptr=create_node(i);
        enqueue(newptr);
        cin>>y;
    }
display_queue(front);
while(x=='y'||x=='Y'){
    dequeue();
    display_queue(front);
    cin>>x;
}
return 0;
}
node *create_node(int i){
    ptr=new node;
    ptr->data=i;
    ptr->next=NULL;
    return ptr;
}
void enqueue(node *n){
    if(rear==NULL){front=rear=n;}
    else
    {
        rear->next=n;
        rear=n;
    }
    
}
void dequeue(){
    if(front==NULL){cout<<"underflow";}
    else{
        a=front;
        front=front->next;
        delete a;
        
    }
}
void display_queue(node *np)
{
    while(np!=NULL)
    {
        cout<<np->data;
        np=np->next;
        
    }
    cout<<"\n";
}
    

   