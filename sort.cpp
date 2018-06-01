#include <iostream>
void sort(int,int[]);
using namespace std;
int main(){
    int e,size;
    cin>>size;
    int a[size];
    for(int j=0;j<size;j++){
        cin>>e;
        a[j]=e;
    }
    sort(size,a);
 return 0;   
}
void sort(int size,int a[]){
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int k=0;k<i;k++){
            if(a[i]<a[k]){
            temp=a[k];
            a[k]=a[i];
            for(int l=i;l>k+1;l--){
             a[l]=a[l-1];
             }
            a[k+1]=temp;
            }
        }
            
    }
 for(int j=0;j<size;j++){
        cout<<a[j];
    }
}
