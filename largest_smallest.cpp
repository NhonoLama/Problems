// find the largest and smallest number in an array

#include<iostream>

using namespace std;

int main(){
	int arr[8] = {5,6,2,4,1,9,7};
	int large,small,i;
	
	large= arr[0];
	for(i=1;i<7;i++){
		if(arr[i]>large){
			large = arr[i];
		}
	}
	
	small= arr[0];
	for(i=1;i<7;i++){
		if(arr[i]<small){
			small = arr[i];
		}
	}
	
	cout<<"Largest: "<<large<<endl;
	cout<<"Smallest: "<<small<<endl;
	
	
	
	
	
}
