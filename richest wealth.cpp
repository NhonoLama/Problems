#include<iostream>

using namespace std;

int richest(int accounts[][2]);

int main(){
    int accounts[3][2] = {{1,5},{7,3},{3,5}};
    cout<<"answer: "<<richest(accounts);
    return 0;
}

int richest(int accounts[][2]){
    int max = accounts[0][0] + accounts[0][1];
    for(int i = 1 ; i<3 ; i++){
    	int sum=0;
        for(int j=0 ; j<2 ; j++){
           sum = sum + accounts[i][j];
           if(sum>max){
             max = sum;
           }
        }
    }
    return max;
}

