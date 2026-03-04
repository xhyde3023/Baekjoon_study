#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, sum = 0;
	cin >> n;
	
	while(n--) {
		int a, b;
		cin >> a >> b;
		sum += b % a;
	}
	cout << sum;
	
	return 0;
}