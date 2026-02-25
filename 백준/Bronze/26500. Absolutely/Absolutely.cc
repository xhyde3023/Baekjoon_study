#include <iostream>
#include <iomanip>

using namespace std;
void f(string l);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	double a, b;
	
	cin >> n;
	
	while(n--) {	
		cin >> a >> b;
		
		if(b > a) {
			int t = a;
			a = b;
			b = t;
		}
		cout << fixed << setprecision(1) << a - b << "\n";
	}
	
	return 0;
}
