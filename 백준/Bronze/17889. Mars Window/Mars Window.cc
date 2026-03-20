#include <iostream>
using namespace std;
int arr[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, check = 0;
	cin >> n;
	
	int M = (n - 2018) * 12 + 8;
	int m = (n - 2018) * 12 - 3;
	
	for(int i = m; i <= M; i++) {
		if(i >= 0 && i % 26 == 0) check = 1;
	}
	
	if(check) cout << "yes";
	else	  cout << "no";
	
	return 0;
}
