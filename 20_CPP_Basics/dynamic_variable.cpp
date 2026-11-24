#include <iostream>
using namespace std;

int *p;

int fun()
{
    int x = 5;
    p = &x;
    cout << "Fun -> " << *p << endl;
    return x;
}

int main()
{
    fun();
    cout << "Main -> " << *p << endl;
    return 0;
}
