#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,r1,r2,r3;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>r1>>r2>>r3;
	    if((r1>(r2+r3)) || (r3>(r2+r1)) || (r2>(r1+r3)) ){
	        cout<<"Yes"<<endl;
	}else {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}

