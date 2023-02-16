//running sum

#include<iostream>

using namespace std;

int main(){
	int arr[5] = {2,2,1,4,1} , arr2[5];
	int sum = 0;
	for(int i=0; i<5; i++){
		sum += arr[i];
		arr2[i] = sum;
	}
	
	for(int i=0 ; i<5; i++){
		cout<<arr2[i];
	}

}
