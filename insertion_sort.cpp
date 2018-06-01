#include <iostream>
void insertion_sort(int,int[]);
using namespace std;
int main(){
    int e,size;
    cin>>size;
    int a[size];
    for(int j=0;j<size;j++){
        cin>>e;
        a[j]=e;
    }
    insertion_sort(size,a);
 return 0;   
}
void insertion_sort(int size,int a[]){
    int temp,j;
    for(int i=1;i<size;i++)
    {  
    temp=a[i];
    j=i-1;
    while(j>=0)
    {
        if(temp<a[j]){
           a[j+1]=a[j];
           j=j-1;
            
        }
        else{break;}
       
    }
    a[j+1]=temp;
    }
 for(int j=0;j<size;j++){
        cout<<a[j];
    }
}
