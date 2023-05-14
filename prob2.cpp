#include<iostream>

using namespace std;

int main(){
    int accounts[][2] = {{1,5},{7,3},{3,5}};
    int sum;
    int max = 0;
    for(int i = 0 ; i<3 ; i++){
        sum = 0;
        for(int j=0 ; j<2 ; j++){
            sum += accounts[i][j];
        }
        if(sum>max){
            max = sum;
        }
    }

    cout<<"answer: "<<max;
}
