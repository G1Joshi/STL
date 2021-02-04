#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator i = v.begin();
    cout << *i << endl;
    i = next(i, 4);
    cout << *i << endl;
    i = prev(i, 2);
    cout << *i << endl;
    advance(i, 6);
    cout << *i << endl;
    return 0;
}