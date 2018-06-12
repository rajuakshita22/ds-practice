#include <iostream>

using namespace std;
struct node{
    int data;
    node *next;
} *ptr,*newptr,*front,*last,*a;
node *create_node(int);
void create_ll(node *);
void check_cyclic();
int main()
{
    int i,j,k=1;
    char y='y',ab;
    while(y=='y'||y=='Y')
    {
        cin>>i;
        newptr=create_node(i);
        create_ll(newptr);
        cin>>y;
        
    }
    cin>>ab;//to make it cyclic 
    if(ab=='y'||ab=='Y'){
        cin>>j;//point to which node 
     while(k<j){
         a=a->next;
         k++;
         }
         last->next=a;
    }
    check_cyclic();
   return 0;
}
node *create_node(int i){
    ptr=new node;
    ptr->data=i;
    ptr->next=NULL;
    return ptr;
}
void create_ll(node *np){
    
    
    if(front==NULL){front=last=a=np;}
    else { last->next=np;
         last=np;
        
    }
    
}
void check_cyclic(){
    node *p1,*p2;
    p1=p2=front;
    while(p2!=NULL&&p2->next!=NULL){
        p1=p1->next;
        p2=p2->next->next;
        if(p1==p2){
            cout<<"the linked list is cyclic";
            break;
        }
    }
    if(p1!=p2){cout<<"the LL is not circular";}
}


    
