#include <iostream>
int check_braces(char[]);
struct node{
    char data;
    node *next;
}*ptr,*top,*a;
void push(char);
void pop();
using namespace std;

int main()
{
   char s[10];
   int i;
   cin>>s;
   i=check_braces(s);
   if(i==1){cout<<"the braces are in the right oder";}
   else if(i==0){cout<<"incorrect oder of braces";}
   return 0;
}
int check_braces(char s[]){
    int j=0;
    while(s[j]!='\0'){
        if(s[j]==')'){
            if(top==NULL){return 0;
            }
            else{pop();}
        }
        else if(s[j]=='('){
            push(s[j]);
        }
        j++;
    }
    if (top==NULL){return 1;}
    else{return 0;}
}
void push(char a){
    ptr=new node;
    ptr->data=a;
    ptr->next=NULL;
    if(top==NULL){top=ptr;}
    else
    {
        ptr->next=top;
        top=ptr;
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