#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x>>y;
	    int choBar = (2*x);
	    int canBar = (5*y);
	    if(choBar>canBar){
	        cout<<"Chocolate"<<endl;
	        }else if(choBar<canBar){
	            cout<<"Candy"<<endl;
	        }else{
	            cout<<"Either"<<endl;
	        }
	}
	return 0;
}
