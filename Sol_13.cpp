#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,y;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n>>x>>y;
	    int sum = ((x*1)+(y*2));
	    if(sum<=n){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
