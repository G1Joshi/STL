#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator i;
    i = v.begin();
    cout << *i << endl;
    i = v.end();
    i--;
    cout << *i << endl;
    return 0;
}