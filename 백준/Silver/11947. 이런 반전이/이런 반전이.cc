#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		long long a;
		cin >> a;
		
		long long k = a, cnt = 1;
		
		while(k > 0) {
			k /= 10;
			cnt *= 10;
		}
		long long l = (cnt - 1) / 2;
		if(a < l) cout << a * (cnt - 1 - a) << "\n";
		else	  cout << l * (l + 1) << "\n";
	}
	
	return 0;
}