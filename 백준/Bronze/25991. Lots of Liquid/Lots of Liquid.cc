#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	double sum = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		double a;
		cin >> a;
		sum += pow(a, 3);
	}
	sum = pow(sum, (double)1/3);
	
	cout.precision(6);
	cout << fixed << sum;
	
	return 0;
}