#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }

    for (int row = n-1; row >= 1; row--)
    {
        for (int space = 1; space <= n - row; space++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }

    return 0;
}
