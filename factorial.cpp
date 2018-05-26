#include <iostream>
#include <math.h>
using namespace std;
 

    int main () {
    int i,fact=1;
    cin>>i;
    for(int k=i;k>0;k--)
    {
        fact=k*fact;
    }
    cout<<fact;
    return 0;

}