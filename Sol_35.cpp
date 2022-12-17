#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>a>>b;
	    if(a>b){
	        cout<<(7-a)<<endl;
	    }else{
	        cout<<(7-b)<<endl;
	    }
	}
	
	return 0;
}


// link => https://www.codechef.com/problems/AIRHOCKEY
