#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x>>y>>z;
	    int output = ((z-y)/x);
	   cout<<output<<endl;
	}
	
	return 0;
}
