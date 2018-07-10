#include<iostream>
using namespace std;
void sort(int[],int);
int main(){
	int array[size],digit,size,res,j=0;
	cin>>size;
	for(int i=0;i<size;i++){
    cin>>digit;
	array[i]=digit;
	}
	sort(array,size);
	int min_xor=array[0]^array[1];
	while(j<size-1){
    res=array[j]^array[j+1];
    if(res<=min_xor){
    min_xor=result;
    }
	j++;
	}
	retun 0;
}
void sort(int array[],int size){
	for(int k=0;k<size;k++){
	for(int l=0;l<size-k;l++){
	if(array[l]>array[l+1]){
	int temp=array[l];
	array[l]=array[l+1];
	array[l+1]=array[l];}
	}
	}
}