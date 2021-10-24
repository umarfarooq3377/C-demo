#include <iostream>
using namespace std;

//Program to check whether a year is a leap year or not. Using switch statement

int main (){
	int year;
	cout<<"Enter any Year "<<endl;
	cin>>year;
	
	switch(((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))
	{
		case 1:
			cout<<year<<" Is a leap Year";
			break;
		case 0:
			cout<<year<<" Is not a leap Year";
			break;
	}
	
	return 0;
}
