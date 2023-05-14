#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

vector<string> buzzfizz(){
    int num;
    vector<string> arr;
    cout<<"enter the amount of data:"<<endl;
    cin>>num;

    for(int i=1 ; i<=num ;i++){
        if(i % 5 == 0 && i %3 == 0){
            arr.push_back("FizzBuzz");
        }else if(i % 5 == 0){
            arr.push_back("Buzz");
        }else if(i % 3 == 0 ){
            arr.push_back("Fizz");
        }else{
            arr.push_back(to_string(i));
        }
    }
    return arr;
} 

int main(){
    vector<string> p;
    p = buzzfizz();
    for(int i=0 ; i<15 ; i++){
        cout<< p[i]<<endl;
    }

}
