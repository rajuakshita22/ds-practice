#include <iostream>

using namespace std;

int main()
{
   int size,e,array[size],j=2;
   cin>>size;
   for(int i=0;i<size;i++){
       cin>>e;
       array[i]=e;
   }
   int number=array[0]^array[1];
   while(j<size){
       number=number^array[j];
       j++;
   }
   cout<<number;
   return 0;
}