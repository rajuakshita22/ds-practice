#include <iostream>
#include <math.h>
using namespace std;
int pow(int,int);
int main() 
{
int a,b,c;
cin>>a;
cin>>b;
c=pow(a,b);
cout<<c;
}
int pow(int a,int b){
    int x;
    if(b==0){return 1;}
    else if(b==1){return a;}
    x=pow(a,b/2);
    if(b%2==0)
    {
        return x*x;
    }
    else if(b%2!=0)
    {
        return x*x*a;
    }
}
   