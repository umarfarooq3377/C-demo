#include<iostream>
using namespace std;

int main(){
	int age;
	char sex,status;
	cout<<"Enter your Age ";
	cin>>age;
	cout<<"Enter your Gender( M or F ) ";
	cin>>sex;
	cout<<"Enter Your Martial Status ( Y or N ) ";
	cin>>status;
	
	if(sex=='F'||sex=='f'){
		cout<<"You will work only Urban Areas";
	}
	if(sex=='M'|| sex=='m' && age>20 && age<40){
		cout<<"You will work in anywhere";
	}
	else if(sex=='M' || sex =='m' && age>40 && age<60){
		cout<<"You will work in only urban areas";
	}
	else {
		cout<<"Error";
	}
	return 0;
}
