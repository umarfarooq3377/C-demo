#include<iostream>
using namespace std;

//C++  Program to check whether a character is an uppercase or lowercase alphabet. Using the switch statement

int main(){
	char ch;
	cout<<"Enter any Character ";
	cin>>ch;
	switch(ch>=65 && ch<=90)
	{
	
		case 1:
			cout<<"You entered an uppercase characterm";
			break;
		case 0:
			switch(ch>=97 && ch<=122){
				case 1:
					cout<<"You entered a lowercase character";
					break;
				case 0:
					switch(ch>=48 && ch<=57){
						case 1:
							cout<<"You entered a digit";
							break;
						case 0:
							cout<<"You entered a special character";
						
					}
			}
			
		
}
	return 0;
}
