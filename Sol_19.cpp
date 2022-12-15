#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n;
	    int mins = (n*60);
        int games = mins/20;
        cout<<games<<endl;
	}
	return 0;
}
