#include<iostream>
using namespace std;
int main(){
    int number,num,count=0;
    cin>>number;
    while(number!=0){
        num=number&1;
        if(num!=0){count ++;}
        number=number>>1;
    }
    cout<<count;
    return 0;
}