#include <iostream>
#include <stack> 
using namespace std;
stack<int> s;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	while(n--) {
		int k;
		cin >> k;
		
		while(k > 0) {
			s.push(k % 3);
			k /= 3;
		}
		
		int ss = s.size();

		for(int i = 0; i < ss; i++) {
			cout << s.top() << " ";
			s.pop();
		}
		cout << "\n";
	}
	
	return 0;
}
