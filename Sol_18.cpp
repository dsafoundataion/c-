#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>a>>b>>c;
	    if(a>b && a>c){
	   cout<<"Alice"<<endl;
	    }else if(a<b && c<b){
	        cout<<"Bob"<<endl;
	   }else {
	       cout<<"Charlie"<<endl;
	   }
	}
	return 0;
}
