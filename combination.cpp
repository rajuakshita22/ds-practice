#include <iostream>
#include <math.h>
using namespace std;
 
    int factorial(int i);
    int main () {
    int a,b,c,n,d1,d2;
    cin>>a>>b;
    c=a-b;
    if(a>b){
        n=factorial(a);
        d1=factorial(b);
        d2=factorial(c);
    }
    else
    {
        n=factorial(b);
        d1=factorial(a);
        d2=factorial(-c);
    }
    cout<<"combination"<<n/(d1*d2);
    
    return 0;

}
    int factorial(int i)
    {
        int fact=1;
    for(int k=i;k>0;k--)
    {
        fact=k*fact;
    }
    return fact;
    }