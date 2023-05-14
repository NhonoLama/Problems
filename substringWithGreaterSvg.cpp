#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int flag=0,total=0;
        int avg =0;
        for(int i =1 ; i<=k ; i++){
           total += arr[i];
        }
        avg = total/k;
        if(avg>=threshold){
          flag++;
        }

        for(int i=k ; i<arr.size() ; i++){
            total += arr[i]-arr[i-k];
            avg = total/k;
            if(avg>=threshold){
               flag++;
            }
            

        } 
        
        return flag;
    }
};


int main(){
    Solution s1;
    vector<int>arr = {11,13,17,23,29,31,7,5,2,3};
    int answer = s1.numOfSubarrays(arr,3,5);
    cout<<answer<<endl;
}
