#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x>>y>>z;
	    int total_money = (x*5)+(y*10);
	    int chocholate = total_money/z;
	    cout<<chocholate<<endl;
	}
	return 0;
}
