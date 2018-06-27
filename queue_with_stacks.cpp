#include <iostream>

using namespace std;
void enqueue(int);
void dequeue();
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
    void push(int);
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
  stack s1,s2;  
int main()
{ 
    int n;
cin>>n;
int type;
while(n--) {
 cin>>type;
 switch(type) {
 case 1:
 {
  int num;
  cin>>num;
  enqueue(num);
  break;
 }
 case 2:cout<<s1.top;
 break;
 case 3: dequeue();
 break;
}
}
   return 0;
}
void enqueue(int data){
    while(!s1.isempty()){
        s2.push(s1.top->i);
        s1.pop();
    }
    s1.push(data);
    while(!s2.isempty()){
        s1.push(s2.top->i);
        s2.pop();
    }
s1.display(s1.top);    
}
void dequeue(){
    if(!s1.isempty()){
        s1.pop();
    }
    else
    {cout<<"underflow";}
    s1.display(s1.top);
}