#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 8};
    int maxSum = 0;
    int currSum = 0;
    // Brute Force Approach-Done Now we will do it using Kadanes's Algo
    /*
    {

    // // start
    // for (int start = 0; start < n; start++)
        // {
            //     int currSum = 0;
    //     // end
    //     for (int end = start; end < n; end++)
    //     {
        //         currSum += arr[end];
        //         maxSum = max(maxSum, currSum);
        //     }
        // }
        // cout << "Max Sum is: " << maxSum << endl;
    }
    */
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    cout << "Max Sum is: " << maxSum << endl;

        return 0;
}