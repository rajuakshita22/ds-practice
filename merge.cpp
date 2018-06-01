#include <iostream>

using namespace std;
void merge(int[],int,int[],int);
 int main()
 {
    int s1,s2,e1,e2;
    cin>>s1>>s2;
    int a[s1],b[s2];
     for(int i=0;i<s1;i++)
     {
         cin>>e1;
         a[i]=e1;
     }
     for(int j=0;j<s1;j++)
     {
         cin>>e2;
         b[j]=e2;
     }
     merge(a,s1,b,s2);
 
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
          c[l]=b[q];
          q++;
          l++;
      }
      
      for(int m=0;m<s3;m++)
        {
            cout<<c[m];
        }

      
      
     
 }
 