#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x>>y;
	    if(x>y){
	        cout<<"LOSS"<<endl;
	    }else if(x<y){
	        cout<<"PROFIT"<<endl;
	    }else{
	        cout<<"NEUTRAL"<<endl;
	    }
	}
	return 0;
}
