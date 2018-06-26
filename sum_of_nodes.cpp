#include <iostream>
#include <math.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
} *ptr,*current,*rt,*newptr,*parent;
void create_bst(int [],int);
node *traverse(int,node*);
int sum_of_nodes(node*);
node *create_node(int);
int main(){
    int size,e;
    cin>>size;
    int a[size]; 
    for(int i=0;i<size;i++){
        cin>>e;
        a[i]=e;
    }
    create_bst(a,size);
    cout<<sum_of_nodes(rt);
    return 0;
    
}
void create_bst(int a[],int size){
    int j=0;
    while(j<size){
        newptr=create_node(a[j]);
        if(rt==NULL){rt=newptr;}
        else{
           current=traverse(a[j],rt);
            if(a[j]<current->data){
                
                current->left=newptr;
            }
            else if(a[j]>current->data){
                current->right=newptr;
            }
        }
        j++;
    }
}
    node *traverse(int nvalue,node* np){
        if(nvalue<np->data)
        { 
          if(np->left!=NULL)  return traverse(nvalue,np->left);
            else return np;
        }
            
        else if(nvalue>np->data)
        {
        if(np->right!=NULL) return traverse(nvalue,np->right);
            else return np;
        }
    }
    node *create_node(int k){
    ptr=new node;
    ptr->data=k;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
    }

int sum_of_nodes(node *np){
    int lval,rval;
    if (np==NULL){return 0;}
    lval=sum_of_nodes(np->left);
    rval=sum_of_nodes(np->right);
    return np->data+lval+rval;

}