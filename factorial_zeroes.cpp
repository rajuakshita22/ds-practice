#include <iostream>

using namespace std;
int nm_of_zeroes(int);
int main()
{
   int number;
   cin>>number;
   cout<<nm_of_zeroes(number);
   return 0;
}
int nm_of_zeroes(int number){
    int i=5,n=0;
    while(i<=number){
        n=n+number/i;
        i=i*5;
    }
  return n;  
}