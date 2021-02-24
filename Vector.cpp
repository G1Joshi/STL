#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);
    for (auto i : v)
        cout << i << " ";
    cout << "\n";

    vector<int> v1{10, 20, 30, 40, 50};
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << "\n";

    vector<int> v2 = v1;
    for (int i = 0; i < v2.size(); i++)
        cout << v2.at(i) << " ";
    cout << "\n";

    vector<int> v3(5, 10);
    for (auto i = v3.begin(); i != v3.end(); i++)
        cout << *i << " ";
    cout << "\n";

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v4(arr, arr + n);
    vector<int>::iterator i;
    for (i = v4.begin(); i != v4.end(); i++)
        cout << *i << " ";
    cout << "\n";

    return 0;
}