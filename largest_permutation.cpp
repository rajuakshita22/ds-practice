#include <iostream>
#include <math.h>
using namespace std;
int sort(int[] ,int);
int main()
{
   
   int number,digit=0,a[100],largest,n=0;
   cin>>number;
   while(number>0)
   {
       a[n]=number%10;
       number=number/10;
       n++;
       digit++;
   }
  largest=sort(a,digit);
    cout<<largest;
   return 0;
}
int sort(int a[],int digit){
   int num=0,pos; 
    int b[10]={};
    for(int i=0;i<digit;i++){
        pos=a[i];
        b[pos]=b[pos]+1;
        }
    for(int k=9;k>=0;k--){
            while(b[k]!=0){
            b[k]=b[k]-1;
            num=num*10+k;
          }
    }
    return num;
}

