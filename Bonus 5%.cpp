#include<iostream>
using namespace std;

int main(){
	int salary , year;
	float bonus;
	cout<<"Enter your Salary? \n";
	cin>>salary;
	
	cout<<"Enter your Service year? \n";
	cin>>year;
	
	if(year>5){
		bonus=salary*0.05;
		cout<<"Your salary with 5% bonus is "<<bonus+salary;
	}
	else{
		cout<<"Not eligible for bonus! Your salary is "<<salary;
	}
	return 0;
}
