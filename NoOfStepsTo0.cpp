#include<iostream>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while(num != 0){
            if(num % 2 == 0){
                num=num/2;
            }else {
                num--;
            }
            steps++;
        }
        return steps;
    }
};

int main(){
	int num;
    Solution s1;
    cout<<"enter the value to be calculated:"<<endl;
    cin>>num;
    int value = s1.numberOfSteps(num);
    cout<<value;
}
