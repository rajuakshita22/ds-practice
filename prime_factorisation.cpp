#include <iostream>
#include <math.h>
using namespace std;
 

    int main () {
    int b,a[1000]={};
    a[0]=1;
    cin>>b;
    for(int i=2;i<1000;i++)
    {
         for(int k=i+1;k<1000;k++)
       {
        if(k%(i)==0)
        {a[k-1]=1;
        }
       }
        
    }
    for(int j=1;j<b;j++)
    {
        if(a[j]==0&&(b%(j+1))==0)
        { 
            cout<<j+1<<"\n";
        }
    }
    
    
    return 0;

}