#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, c, k;
	cin >> a >> b >> c;
	
	if(a == b && b == c) {
		cout << 10000 + 1000 * a;
	}
	else if(a == b) cout << 1000 + a * 100;
	else if(c == b) cout << 1000 + b * 100;
	else if(a == c) cout << 1000 + a * 100;
	else {
		if(b < c) swap(b, c);
		if(a < c) swap(a, c);
		if(a < b) swap(a, b);
		cout << a * 100;
	}
	
	return 0;
}