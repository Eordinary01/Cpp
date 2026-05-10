#include <iostream>
using namespace std;

// Pyramid pattern
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        // spaces: n-i-1

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // num1: i+1

        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        // num2: j++

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}