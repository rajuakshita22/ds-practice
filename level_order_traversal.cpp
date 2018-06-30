#include<iostream>
// #include<queue>
using namespace std;
 
struct tree{
    int data;
    tree* left;
    tree* right;
}*rt,*newptr,*pt;
struct node{
    tree *tr;
    node* next;
}*ptr;
class Queue{
    node* create(tree *number){
        ptr=new node;
        ptr->tr=number;
        ptr->next=NULL;
        return ptr;
    }
    node *a,*n;   
    public:
    node *front, *rear;
    void enqueue(tree *nm){
        n=create(nm);
        if(front==NULL){front=rear=n;}
        else{
            rear->next=n;
            rear=n;
        }
    }
    void dequeue(){
        // cout<<"st"<<endl;
        if(front==NULL){cout<<"underflow";}
        else{
            a=front;
            front=front->next;
            delete a;
        }
        // cout<<"en"<<endl;
    }
    bool isempty(){
        if(front==NULL) return true;
        else return false;
    }
    };
 void inoder_traversal(tree *Node);
void create_tree(tree*);
 tree *traverse(tree*,int);
 tree *create_node(int);
 void level_oder_traversal(tree*);

    int main(){
        char ch = 'y';
        int num;
        while(ch=='y'||ch=='Y'){
            cin>>num;
            tree* ne=create_node(num);
            create_tree(ne);
            cin>>ch;
        }
        inoder_traversal(rt);
        level_oder_traversal(rt);
        return 0;
    }
    void create_tree(tree *ne){
        if(rt==NULL){rt=ne;}
        else
        {
            pt=traverse(rt,ne->data);
            if(ne->data < pt->data){
                pt->left = ne;
                }
                else if(ne->data > pt->data){
                    pt->right=ne;
                }
        }
    }
    tree *traverse(tree *ro,int nm){
        if(nm<ro->data){
            if(ro->left!=NULL){traverse(ro->left,nm);}
            else if(ro->left==NULL){return ro;}
        }
        else if(nm>ro->data){
            if(ro->right!=NULL){traverse(ro->right,nm);}
            else if(ro->right==NULL){return ro;}
        }
    }
    tree *create_node(int numb){
     newptr=new tree;
        newptr->data=numb;
        newptr->left=NULL;
        newptr->right=NULL;
        return newptr;
    }
    
    void level_oder_traversal(tree *nde){
        Queue q1;
        cout<<"?"<<endl;
        q1.enqueue(nde);
       while(!q1.isempty()){
       	   node *curr_node = q1.front;
       	   
       	   if(curr_node->tr!=NULL){
       	       
       	   	   cout<<"n->"<<curr_node->tr->data<<endl;
		       q1.enqueue(curr_node->tr->left);
		       q1.enqueue(curr_node->tr->right);
       	   } else {
       	    //   cout<<"null"<<endl;
       	   }
       	   q1.dequeue();
       	   
       }
    }
    
    
        void inoder_traversal(tree *Node){
 
    if(Node==NULL) return;
    inoder_traversal(Node->left);
    cout<<"inordertt";
    cout<<Node->data<<endl;
    inoder_traversal(Node->right);
 
 
 
}
