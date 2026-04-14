#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct instruction {
	string step;
	int num;
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<instruction> v;
	stack<int> s, r;
	r.push(0);
	
	int n = 1, t, N = 0;
	string l;
	
	cin >> t;
	
	for(int i = 0; i < t; i++) {
		cin >> l;
		if(l == "PUSH" || l == "IFZERO") cin >> N;
		v.push_back({l, N});
	}
	
	while(n <= t) {
		l = v[n - 1].step;
		N = v[n - 1].num;
		
		if(l == "PUSH") {
			s.push(N);
		}
		else if(l == "STORE") {
			r.push(s.top());
			s.pop();
		}
		else if(l == "LOAD") {
			s.push(r.top());
		}
		else if(l == "PLUS") {
			long long a = s.top();
			s.pop();
			a += s.top();
			s.pop();
			s.push(a);
		}
		else if(l == "TIMES") {
			long long a = s.top();
			s.pop();
			a *= s.top();
			s.pop();
			s.push(a);
		}
		else if(l == "IFZERO") {
			if(s.top() == 0) {
				n = v[n - 1].num;
			}
			s.pop();
		}
		else if(l == "DONE") {
			cout << s.top();
			break;
		}
		
		n++;
	}
	
	return 0;
}
