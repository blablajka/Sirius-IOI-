#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, s;
	while (true) {         // СЧИТЫВАНИЕ НЕИЗВЕСТНОГО КОЛИЧЕСТВА СТРОЧЕК
		getline(cin, a);
		if (a.empty())
			break;
		s += a;
	}
	sort(begin(s), end(s)); // сортировка строки в лексикографическом порядке
	s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end()); // убрать пробелы из строки
	std::unique_copy(s.begin(), s.end(), std::ostreambuf_iterator<char>(std::cout)); // убрать повторения
}
