//selection sort

#include<iostream>

using namespace std;

void swap (int& x , int& y){
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	int min;
	int arr[] = {3,5,2,7,1,9,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0 ; i<n-1 ; i++){
		min = i;
		for(int j=i+1 ; j<n; j++){
			if (arr[j]<arr[min]){
				min = j;
			}
		swap(arr[i],arr[min]);
			
		}
	}
	
	for(int i = 0 ; i<n ; i++){
		cout<< arr[i]<<'\t';
	}
		
}
