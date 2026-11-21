#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << min({1, 2, 3, 4, 5, 6, 7, 8, 9, 28}) << endl;
    cout << max({23, 43, 92, 74, 20}) << endl;

    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}
