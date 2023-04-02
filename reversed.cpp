#include<iostream>
#include<string>

using namespace std;

int main(){  
    string iam = "dawa";
    string  change(iam.length()+1 , '\0');
    int j =0;

	for(int i = iam.length()-1; i>=0; i--) { 
		change[j] = iam[i];
		j++;
	}
	
	cout<<change;
}
