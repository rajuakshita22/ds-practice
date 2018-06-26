#include <iostream>

using namespace std;
int fibonacci(int);
int main()
{
   int number;
   cin>>number;//number of terms in the series
   cout<<fibonacci(number);
   return 0;
}
int fibonacci(int number){
    if(number==1){return 0;}
    else if(number==2){return 1;}
    else return fibonacci(number-1)+fibonacci(number-2);
}