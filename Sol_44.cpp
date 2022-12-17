#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x>>y;
	    if(x<y){
	        cout<<"First"<<endl;
	    }else if(x>y){
	       cout<<"Second"<<endl;
	   }else{
	        cout<<"Any"<<endl;
	   }
	}
	return 0;
}
