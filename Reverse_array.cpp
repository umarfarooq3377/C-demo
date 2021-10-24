#include<iostream>
using namespace std;

int main(){
	int i,j, arr[10];
	
	cout<<"Enter ten integers "<<endl;
	for(i=0;i<10;i++){
		cin>>arr[i];
	}
	cout<<"Reverse Array is ";
	for(j=9;j>=0;j--){
	cout<<"\t"<<arr[j];
	}
	
	return 0;
}
