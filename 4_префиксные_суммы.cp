//отвечает на частые запросы суммы элементов на полуинтервале [L, R) - левая включительно, правая нет
//O(N) построение массива
// prefixsum[i] = prefixsum[i-1] + nums[i-1]
// sum(L,R) = 0 на полуинтервале, когда prefixsum[R] - prefixsum[L] = 0

#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << "Size of vector: ";
	int n;
	cin >> n;
	vector<int>a(n);
	vector<int>prefixsum(n + 1, 0);
	vector<int>prefixsum2(n + 1, 0);
	int L, R;
	cout << "Type numbers for find Range Sum Query: (L,R)\n";
	cin >> L >> R;
	for (auto& i : a)
		cin >> i;
	for (auto& i : a)
		cout << i <<" ";
	
	for (int i = 1; i < prefixsum.size(); i++)
		prefixsum[i] = prefixsum[i - 1] + a[i - 1];      // Реккурентная реализация
	partial_sum(a.begin(), a.end(), prefixsum2.begin() + 1); // STL реализация
	
	cout << "\nprefix sum\n";
	for (auto& i : prefixsum)
		cout << i << " ";
	cout << "\npartial sum\n";
	for (auto& i : prefixsum2)
		cout << i << " ";
	
	cout << "\n";
	cout<< prefixsum[R] - prefixsum[L]; // sum[L, R)
}
