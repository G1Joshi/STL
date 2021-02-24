#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{10, 20, 30, 40, 50};
    cout << v.front() << " " << v.back() << "\n";

    v.pop_back();
    v.push_back(100);
    cout << v.back() << "\n";

    v.insert(v.begin(), 50);
    cout << v.front() << "\n";
    v.erase(v.end() - 1);
    cout << v.back() << "\n";

    v.insert(v.end(), 5, 100);
    for (auto &i : v)
        cout << i << " ";
    cout << "\n";

    v.erase(v.begin(), v.begin() + 5);
    for (auto &i : v)
        cout << i << " ";
    cout << "\n";

    v.clear();
    cout << v.size() << " " << v.capacity() << "\n";

    if (v.empty())
        v.resize(5, 10);
    for (auto &i : v)
        cout << i << " ";
    cout << "\n";

    return 0;
}