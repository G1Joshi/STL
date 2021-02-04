#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    cout << maximum<int>(5, 10) << endl;
    cout << maximum<char>('e', 'i') << endl;
    cout << maximum<float>(1.25, 1.75) << endl;
    return 0;
}