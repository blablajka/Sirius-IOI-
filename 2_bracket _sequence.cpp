// 0(n) instead of O(n²)

#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
	string a;
	cin >> a;
	vector<char>b;
	for (int i = 0; i < a.size(); i++) {
		if (b.size() == 0) {
			b.push_back(a[i]);
			continue;
		}
		if ((a[i] == '}' && b.back() == '{') || (a[i] == ')' && b.back() == '(') || (a[i] == ']' && b.back() == '[')) {
			b.pop_back();
			continue;
		}
		else {
			b.push_back(a[i]);
		}
	}
	if (b.size() != 0) {
		cout << "no";
	}
	else {
		cout << "yes";
	}
}
