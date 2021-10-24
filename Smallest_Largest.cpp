#include<iostream>
using namespace std;

int main(){
	int n, min, max, sum=0;
	cout<<"Enter the Size of array ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" integers "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];	
	}
		min=arr[0];
		max=arr[0];
	for(int j=0;j<n;j++){	
		if(arr[j]>max) max=arr[j];
		if(arr[j]<min) min=arr[j];
	}
	
	cout<<"Sum of array is "<<sum<<endl;
	cout<<"Average of array is "<<sum/n<<endl;
	cout<<"Maximum Value is "<<max<<endl;
	cout<<"Minimum Value is "<<min<<endl;
	return 0;
}
