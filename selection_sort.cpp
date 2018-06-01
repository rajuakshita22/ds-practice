#include <iostream>
void selection_sort(int,int[]);
using namespace std;
int main(){
    int e,size;
    cin>>size;
    int a[size];
    for(int j=0;j<size;j++){
        cin>>e;
        a[j]=e;
    }
    selection_sort(size,a);
 return 0;   
}
void selection_sort(int size,int a[]){
    int pos,temp,small;
    for(int i=0;i<size;i++)
    {
        small=a[i];
        pos=i;
        for(int k=i+1;k<size;k++){
            if(a[k]<small){
                small=a[k];
                pos=k;
            }
        }
            temp=small;
            a[pos]=a[i];
            a[i]=temp;
    }
 for(int j=0;j<size;j++){
        cout<<a[j];
    }
 
    
}
