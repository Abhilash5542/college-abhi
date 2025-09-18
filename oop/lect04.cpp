#include <iostream>
using namespace std;
void swap(int &a, int &b);

int main()
{
    int a = 0, b = 9;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
}

// swap by reference
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}