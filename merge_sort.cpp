#include <iostream>

using namespace std;
void merge(int[],int,int,int);
void merge_sort(int[],int,int);
 int main()
 {
    int size,ele;
    cin>>size;
    int ar[size];
    for(int i=0;i<size;i++){
      cin>>ele;
      ar[i]=ele;
    }
    merge_sort(ar,0,size-1);
    for(int m=0;m<size;m++)
        {
            cout<<ar[m];
        }
     return 0;
   
 }
 void merge(int ar[],int start,int mid,int end){
     int n1=mid-start+1;
     int n2=end-mid;
     int a[n1],b[n2];
     int ap=0,bp=0,cp=start;
     
    for(int j=0;j<n1;j++){
        a[j]=ar[j+start];
    }
    for(int k=0;k<n2;k++){
        b[k]=ar[k+mid+1];
    }
    
while(ap<n1&&bp<n2){
if(a[ap]<=b[bp]){
    ar[cp]=a[ap];
    ap++;
    
} 
else if(a[ap]>=b[bp]){
    ar[cp]=b[bp];
    bp++;

}
    cp++;
}
 while(bp<n2){
     ar[cp]=b[bp];
     cp++;
     bp++;
 } 
  while(ap<n1){
     ar[cp]=a[ap];
     cp++;
     ap++;
 }
     
      }
 void merge_sort(int ar[],int start,int end){
  int mid;
  if(start<end){
    mid=(start+end)/2;
    merge_sort(ar,start,mid);
    merge_sort(ar,mid+1,end);
    merge(ar,start,mid,end);
  }
  else{ return;}
   
 
}