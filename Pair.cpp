#include <iostream>
using namespace std;

int main()
{
    pair<int, int> p1(10, 20);
    cout << p1.first << " " << p1.second << "\n";

    pair<int, char> p2;
    p2 = {1, 'a'};
    cout << p2.first << " " << p2.second << "\n";

    pair<char, char> p3;
    p3.first = 'x';
    p3.second = 'y';
    cout << p3.first << " " << p3.second << "\n";

    pair<string, string> p4;
    p4 = make_pair("key", "value");
    cout << p4.first << " " << p4.second << "\n";

    return 0;
}