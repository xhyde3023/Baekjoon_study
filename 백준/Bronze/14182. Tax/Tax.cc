#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(1) {
		int n;
		cin >> n;
		
		if(n == 0) return 0;
		
		cout.precision(0);
		cout << fixed;
		
		if(n <= 1000000) cout << n;
		else if(1000000 < n && n <= 5000000) cout << n * 0.9;
		else cout << n * 0.8; 
		
		cout << "\n";
	}
	
	return 0;
}