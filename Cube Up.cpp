#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter cube of the number ";
	cin>>num;
	
	for(int i=1; i<=num; i++){
		cout<<"cube of the "<<i<<" is "<<i*i*i<<endl;
	}
}
