#include <iostream>
#include <math.h>
using namespace std;
 

    int main () {
    int a[1000]={};
    a[0]=1;
    for(int i=2;i<1000;i++)
    {
         for(int k=i+1;k<1000;k++)
       {
        if(k%(i)==0)
        {a[k-1]=1;
        }
       }
        
    }
    for(int j=0;j<1000;j++)
    {
        if(a[j]==0)
        { 
            cout<<j+1<<"\n";
        }
    }
    return 0;

}