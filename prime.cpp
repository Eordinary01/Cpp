#include <iostream>
using namespace std;

int main()
{
    int r1, r2;

    cout << "Enter the first range: ";
    cin >> r1;
    cout << "Enter the second range: ";
    cin >> r2;

    for (int n = r1; n <= r2; n++)
    {
        if (n <= 1)
        {
            cout << "The number " << n << " is not prime" << endl;
            continue;
        }

        int isPrime = 1;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break; 
            }
        }

        if (isPrime)
            cout << "The number " << n << " is prime" << endl;
        // else
        //     cout << "The number " << n << " is not prime" << endl;
    }

    return 0;
}