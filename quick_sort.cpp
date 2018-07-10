#include<iostream>
 using namespace std;
 void quick_sort(int[],int,int);
 void swap(int*,int*);
 int e,size;
 void display(int arr[]) {
    for(int k=0;k<size;k++){
         cout<<arr[k]<<" ";
     }
     cout<<endl;
 }
 int main(){
     
     cin>>size;
     int arr[size];
     for(int i=0;i<size;i++){
         cin>>e;
         arr[i]=e;
     }
     quick_sort(arr,0,size-1);
     display(arr);
     return 0;
 }
 
 void quick_sort(int arr[],int start,int end){
    if(end>start){
         int pivot=arr[end];
         int index=start-1;
         int j=start;
         while(j<=end-1)
         {
            if(arr[j] <= pivot) 
            {
                index++;
                swap(&arr[index],&arr[j]);
            }
            j++;
         }

         swap(&arr[index+1],&arr[end]); 
         quick_sort(arr,start,index); // Here index+1 is the pivot position so index is pivot_position-1. 
         quick_sort(arr,index+2,end);// Here index+1 is pivot position so index+2 is pivot_position+1. 
    }
    else return;
    
}

 void swap(int *x,int *y){
     int temp= *x;
     *x=*y;
     *y=temp;
 }