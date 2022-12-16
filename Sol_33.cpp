#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,k;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n>>x>>k;
	    if(k>=(n*x)){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	        
	    }
	}
	return 0;
}
