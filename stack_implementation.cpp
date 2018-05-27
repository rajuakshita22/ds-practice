#include <iostream>
#include <math.h>
using namespace std;

struct node{
    int data;
    node *next;
}*ptr,*newptr,*top,*a;
node *create_node(int);
void push(node*);
void pop();
void display_stack(node *);
int main() 
{
    int i;
    char y='y',x='y';
  while(y=='y'||y=='Y')
    {
        cin>>i;
        newptr=create_node(i);
        push(newptr);
        cin>>y;
    }
display_stack(top);
while(x=='y'||x=='Y'){
    pop();
    display_stack(top);
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
void push(node *n){
    if(top==NULL){top=n;}
    else
    {
        n->next=top;
        top=n;
    }
    
}
void pop(){
    if(top==NULL){cout<<"underflow";}
    else{
        a=top;
        top=top->next;
        delete a;
    }
}
void display_stack(node *np)
{
    while(np!=NULL)
    {
        cout<<np->data;
        np=np->next;
        
    }
    cout<<"\n";
}
    

   