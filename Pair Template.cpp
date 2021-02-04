#include <iostream>
using namespace std;

template <typename T, typename S>
struct Pair
{
    T a;
    S b;
    Pair(T x, S y)
    {
        a = x;
        b = y;
    }
    T first()
    {
        return a;
    }
    S second()
    {
        return b;
    }
};

int main()
{
    Pair<int, char> p(1, 'a');
    cout << p.first() << endl;
    cout << p.second() << endl;
    return 0;
}