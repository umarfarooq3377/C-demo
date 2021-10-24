#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter any Real number ";
	cin>>num;
	
	if(num>0){
	cout<<"Absolute Value is "<<num;
	}
	else {
		cout<<"Absolute Value is "<<-(num);
	}
	return 0;
}
