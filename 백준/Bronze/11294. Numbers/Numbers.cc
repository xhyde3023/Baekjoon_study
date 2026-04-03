#include <iostream>
#include <cmath>
#include <string>
#include <stack>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(1) {
		int cvt, num;
		string rd;
		stack<int> s;
		
		getline(cin, rd);
		
		if(rd == "#") return 0;
		
		cin >> cvt >> num;
		cin.ignore();
		cout << rd << ", " << num << ", ";
		
		if(cvt == 10) {
			cout << num;
			
		}
		else {
			while(1) {
				if(num >= cvt) {
					s.push(num % cvt);
					num /= cvt;
				}
				else {
					s.push(num);
					break;
				}
			}
			
			int stack_size = s.size();
			
			for(int i = 0; i < stack_size; i++) {
				if(s.top() > 9) {
					char a = 'A' + s.top() - 10;
					cout << a;
				}
				else cout << s.top();
				
				s.pop();
			}
		}
		
		cout << "\n";
		
	}
	return 0;
}