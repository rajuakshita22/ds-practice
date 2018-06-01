#include <iostream>
void bubble_sort(int,int[]);
using namespace std;
int main(){
    int e,size;
    cin>>size;
    int a[size];
    for(int j=0;j<size;j++){
        cin>>e;
        a[j]=e;
    }
    bubble_sort(size,a);
 return 0;   
}
void bubble_sort(int size,int a[]){
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int k=0;k<size-i;k++){
            if(a[k]>a[k+1]){
            temp=a[k];
            a[k]=a[k+1];
            a[k+1]=temp;
            }
        }
            
    }
 for(int j=0;j<size;j++){
        cout<<a[j];
    }
}