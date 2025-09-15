#include <iostream>
using namespace std;

int greatr(int a, int b, int c)
{
    return (a > b ? (a > c ? a : c) : (b > c ? b : c));
}

int main()
{
    int a, b, c, max;
    cin >> a >> b >> c;
    max = greatr(a, b, c);

    cout << max << endl;
}