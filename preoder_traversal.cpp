#include <iostream>
#include <math.h>
using namespace std;
 
struct node{
    int data;
    node *left;
    node *right;
} *newptr,*ptr,*child,*parent,*rt;
void preoder_traversal(node*);
node *create_node(int);
node* getNode(int, node*);
void root(node*);
void insert(int,char,int);
    int main () {
    int i,parent_node_value;
    char y='y',direction;
    while(y=='y'||y=='Y'){
        if(rt==NULL){
            cin>>i;
            newptr=create_node(i);
            root(newptr);
        }
        else {
            cin>>parent_node_value;
            cin>>direction;
            cin>>i;
            insert(parent_node_value,direction,i);
        }
 
        cin>>y;
    }
  preoder_traversal(rt);
    return 0;
 
}
node *create_node(int i){
    ptr=new node;
    ptr->data=i;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
 
void root(node *np){
    rt=np;
 
}
node* getNode(int node_value, node* curr_node ) {
	if(curr_node == NULL){
		return NULL;
	}
	if(curr_node->data == node_value){
		return curr_node;
	}
	node* left = getNode(node_value, curr_node->left);
	if(left != NULL){
		return left;
	}
	node* right = getNode(node_value, curr_node->right);
	if(right != NULL){
		return right;
	}
}
void insert(int parent_node_value,char direction,int i)
{
    child=create_node(i);
    parent= getNode(parent_node_value, rt);
    if(direction=='l'||direction=='L'){
        parent->left=child;
    }
    else if(direction=='r'||direction=='R')
    {
    	parent->right=child;
    }
}
void preoder_traversal(node *Node){
    
    if(Node==NULL) return;
    cout<<Node->data;
    preoder_traversal(Node->left);
    preoder_traversal(Node->right);
}