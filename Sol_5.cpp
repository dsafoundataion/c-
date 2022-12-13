#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N;
	cin>>T;
	for(int i = 0; i<T; i++){
	    cin>>N;
	    if(N%2==0){
	        cout<<"Yes"<<endl;
	    }else {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
