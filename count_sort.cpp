#include <iostream>
void counting_sort(int,int[],int);
using namespace std;
int main(){
    int e,size,max=0;
    cin>>size;
    int a[size];
    for(int j=0;j<size;j++){
        cin>>e;
        a[j]=e;
        if(e>max){max=e;}
    }
    cout<<max<<"\n";
    counting_sort(size,a,max);
 return 0;   
}
void counting_sort(int size,int a[],int max){
    int pos,c[max+1]={};
    for(int i=0;i<size;i++){
        pos=a[i];
        c[pos]=c[pos]+1;
    }
    
 for(int k=0;k<max+1;k++){
     if(c[k]!=0){
        cout<<k;}
    }
}
