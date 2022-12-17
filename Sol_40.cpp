#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x>>y;
	    int dRprice = x*3;
	    int tRprice = y*2;
	    if(dRprice>tRprice){
	        cout<<tRprice<<endl;
	    }else{
	        cout<<dRprice<<endl;
	        
	    }
	    
	}
            
	return 0;
}
