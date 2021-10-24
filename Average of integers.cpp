#include<iostream>
using namespace std;

int main(){
	int arr[10],avg;
	cout<<" Enter Ten Integers \n";
	for (int i=0;i<10;i++){
		cin>>arr[i];
		avg	+= arr[i];
	}
	cout<<"Average value is "<<avg/10;
	return 0;
}
