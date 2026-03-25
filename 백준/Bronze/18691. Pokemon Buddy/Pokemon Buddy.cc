#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	while(n--) {
		int g, c, e;
		cin >> g >> c >> e;
		
		g = g * 2 - 1;
		
		if(c >= e) cout << "0\n";
		else cout <<  (e - c) * g << "\n";
	}
	
	return 0;
}
//:( 