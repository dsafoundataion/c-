#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N, X, H;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> X >> H;
		if (X >= H) {
			cout << "Yes" << endl;
		}
		else {
			cout <<"No" << endl;
		}
	}
	return 0;
}
