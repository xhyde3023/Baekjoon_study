#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(1) {
		int sum = 1;
		string n;
		cin >> n;
		
		if(n == "0") break;
		
		for(int i = 0; i < n.length(); i++) {
			if(n[i] == '1')		 sum += 2;
			else if(n[i] == '0') sum += 4;
			else				 sum += 3;
			sum += 1;
		}
		
		cout << sum << "\n";
	}
	
	return 0;
}