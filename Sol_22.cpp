#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n>>k;
	    if(n<k){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
