#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	if(n >= 3) {
		if(m > 6) cout << m - 2;
		else	  cout << min(m, 4);
	}
	else if(n == 2) {
		cout << min((m + 1) / 2, 4);
	}
	else cout << 1;
	
	return 0;
}