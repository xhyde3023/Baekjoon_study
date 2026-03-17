#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long sum = 0, ans, n;
	cin >> ans >> n;
	
	for(long long i = 0; i < n; i++) {
		long long a, b;
		cin >> a >> b;
		
		sum += a * b;
	}
	
	if(sum == ans) cout << "Yes";
	else 		   cout << "No";
	return 0;
}