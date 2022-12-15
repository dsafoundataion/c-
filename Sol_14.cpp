#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,k,x;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>k>>x;
	   int days = (7*k);
	   cout<<(days-x)<<endl;
	}
	return 0;
}
