#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	while(n--) {
		long long a;
		cin >> a;
		long long h = (long long)sqrt(a);
		
		if(h * h == a) cout << 4 * h << "\n";
		
		else {
			long long i = 1;
			while(h * (h + i) < a) i++;
			cout << h * 4 + 2 * i << "\n";
		}
	}
	
	return 0;
}
