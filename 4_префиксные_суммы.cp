//отвечает на частые запросы суммы элементов на полуинтервале [L, R) - левая включительно, правая нет
//O(N) построение массива
// prefixsum[i] = prefixsum[i-1] + nums[i-1]
// sum(L,R) = 0 на полуинтервале, когда prefixsum[R] - prefixsum[L] = 0

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>a(6);
	vector<int>prefixsum(7);
	for (auto &i : a)
		cin >> i;
	for (auto& i : a)
		cout << i <<" ";
    
	for (int i = 1; i < prefixsum.size(); i++)
		prefixsum[i] = prefixsum[i - 1] + a[i - 1];   // построение
    
    
	cout << "\n";
	for (auto& i : prefixsum)
		cout << i << " ";
}
