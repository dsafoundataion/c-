#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,x;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n>>m>>x;
	    int parameter = (2*n)+(2*m);
	    cout<<parameter*x<<endl;
	}
	return 0;
}
