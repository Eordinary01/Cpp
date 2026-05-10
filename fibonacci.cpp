#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, temp, number, i;

    cout << "Enter the limit to calculate Fibonacci series:";
    cin >> number;
    cout << "Fibonnaci Series:";
    // cout << a << ", " << b << ", ";
    for (i = 0; i <= number; i++)
    {
        temp = a + b;
        cout << temp << ", ";
        a = b;
        b = temp;
    }
    return 0;
}