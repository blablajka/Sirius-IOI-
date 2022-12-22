#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

//проверка на нечётное  (((i >> 0) & 1) == 1) на 20% быстрее чем (i % 2 != 0)

//   if (((i >> 0) & 1) == 1) { 
//          to_do_something;
//      }

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<int>vec(100000000);
    for (int i = 0; i < 100000000; i++) {
        vec[i] = i;
    }


    auto  now = std::chrono::high_resolution_clock::now();
    for (auto& i : vec) {
        if (((i >> 0) & 1) == 1) {
            continue;
        }
    }
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - now);
    std::cout << "Time : " << elapsed.count() << "ns.\n";


    auto  now1 = std::chrono::high_resolution_clock::now();
    for (auto& i : vec) {
        if (i % 2 != 0) {
            continue ;
        }
    }
    auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - now1);
    std::cout << "Time : " << elapsed1.count() << "ns.\n";

}
// 20% разница
