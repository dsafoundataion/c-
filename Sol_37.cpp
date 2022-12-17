#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,p,q;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x>>p>>q;
	    if(p<=q){
	        cout<<0<<endl;
	    }else{
	        cout<<x*(p-q)<<endl;
	    }
	}
	return 0;
}
