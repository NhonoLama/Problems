//running sum using dynamic allocation

#include<iostream>

using namespace std;

int main(){
	int size,sum=0;
	int *arr = new int[size];
	int *arr2 = new int[size];
	
	cout<<"enter the no of data to be enterd: ";
	cin>>size;
	
	cout<<"\nenter those numbers:";
	for(int i=0; i<size; i++){	
		cin>>arr[i];
		sum += arr[i];
		arr2[i]= sum;
	}
	
	cout<<"\nthose numbers are:";
	for(int i=0;i<size;i++){
		cout<<arr2[i]<<"\t";
	}
	
}
