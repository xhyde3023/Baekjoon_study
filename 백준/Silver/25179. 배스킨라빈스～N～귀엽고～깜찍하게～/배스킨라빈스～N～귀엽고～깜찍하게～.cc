#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n, m;
	cin >> n >> m;
	
	if(n % (m + 1) == 1) cout << "Can't win";
	else				 cout << "Can win";
	
	return 0;
}