#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>a>>b;
	    if(a>b){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}

// https://www.codechef.com/problems/COMPLEXITY?tab=statement
