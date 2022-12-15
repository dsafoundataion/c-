#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>a>>b>>c;
	    int max,min;
	    if((a>b && a>c) && (b<a && b<c)){
	        max = a;
	        min = b;
	   } else if((b>a && b>c) && (c<a && b>c)){
	       max = b;
	       min = c;
	   } else{
	       max = c;
	       min = a;
	   }
	   
	  int diff = max-min;
	  cout<<diff<<endl;
	}
	
	return 0;
}
