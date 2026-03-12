#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i = 1;
	while(1) {
		int a, b, c;
		cin >> a;
		
		if(a == 0) break;
		else cin >> b >> c;
		
		if(a * 2 >= sqrt(b*b + c*c)) cout << "Pizza " << i << " fits on the table.\n";
		else					 	 cout << "Pizza " << i << " does not fit on the table.\n";
		i++;
	}
	
	return 0;
}