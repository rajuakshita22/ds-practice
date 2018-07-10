#include <iostream>

using namespace std;
void merge(int[],int,int[],int);
void merge_sort(int ar[],int start,int end)
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
    for(int m=0;m<s3;m++)
        {
            cout<<ar[m];
        }
 
     return 0;
 }
 void merge(int a[],int s1,int b[],int s2){
     int s3,l=0,p=0,q=0;
     s3=s1+s2;
     int c[s3];
     while(p<s1&&q<s2)
    {
        
      if(a[p]<b[q]){
          c[l]=a[p];
          p=p+1;
      }  
      else if(b[q]<a[p]){
          c[l]=b[q];
          q=q+1;
      } 
      l++;
    }
      while(p<s1)
      {
          c[l]=a[p];
          p++;
          l++;
      }
       while(q<s2)
      {
          c[l]=b[q];O
          q++;
          l++;
      }
      
      }
 void merge_sort(int ar[],int start,int end){
  if(start!=end){
    int mid=(start+end)/2;
    merge_sort(ar[],start,mid);
    merge_sort(ar[mid+1],end);
    merge(ar[],mid-start+1,ar[],end-mid)
  }
 }
 