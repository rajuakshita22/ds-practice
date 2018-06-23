#include <iostream>
using namespace std;
 
int precedence(char);
struct node{
        char i;
        node *next;
    }*ptr,*newptr,*a,*top;
class stack{
    node *create_node(char data){
    ptr=new node;
    ptr->i=data;
    ptr->next=NULL;
    return ptr;
    }
    public:
    void push(char d);
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
    void stack::push(char d){
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
    int main(){
        int size,em=0;
        stack s1;
        cin>>size;
        char vop,infix[size],postfix[size];
        for(int E=0;E<size;E++){
            cin>>vop;
            infix[E]=vop;
    for(int e=0;e<size;e++){
        if((infix[e]>='a'&&infix[e]<='z')||(infix[e]>='A'&&infix[e]<='Z')){
            postfix[em]=infix[e];
            em++;
        }
        else if(infix[e]=='('){
            s1.push(infix[e]);
        }
        else if(infix[e]==')'){
            while(!s1.isempty()&&top->i!='('){
                postfix[em]=top->i;
                em++;
                s1.pop();
            }
        s1.pop();    
        }
        else
        {
          while(!s1.isempty()&&top->i!='('&&precedence(top->i)>=precedence(infix[e]))
           {
            postfix[em]=top->i;
            em++;
            s1.pop();
           }
            s1.push(infix[e]);
        }
    }  
    while(!s1.isempty()){
        postfix[em]=top->i;
        s1.pop();
        em++;
    }
for(int ele=0;ele<size;ele++){
    cout<<postfix[ele];
}
       return 0;     
    }    
    int precedence(char c){
    switch(c){
 
        case '^': return 5;
                  break;
        case '/':return 4;
                    break;
        case '*':return 4;
                  break;
 
        case '-':return 3;
                   break;
        case '+':return 3;
                  break;
 
    }
}