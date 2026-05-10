#include <iostream>
#include <vector>

using namespace std;

int decToBinary(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2; // remainder

        decNum /= 2; // quotient

        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

int binToDecimal(int binNum)
{
    int ans = 0, pow = 1;

    while (binNum > 0)
    {
        int rem = binNum % 10; // remainder

        ans += rem * pow;
        binNum /= 10; // quotient
        pow *= 2;
    }
    return ans;
}

void changeArr(int arr[], int size)
{
    cout << "In function " << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
        cout << arr[i] << " " << endl;
    }
}

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1; // Target not in array
}

void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{

    /*

    for (int i = 1; i <= 10; i++)
    {

    // cout << decToBinary(i) << endl;
    // cout << binToDecimal(0101) << endl;
}


    // cout << sizeof(int) << endl;
    // cout << sizeof(long int) << endl;
    // cout << sizeof(short int) << endl;
    // cout << sizeof(long long) << endl;




    // int marks[100];
    int marks[5]={99,11,54,36,88};
    int size = 5;

    // Size of array
    // int sz = sizeof(marks)/ sizeof(int);
    // cout<<sz<<endl;


    // loops
    for(int i=0; i<size;i++)
    {
        cout<<marks[i]<<endl;
    }


 --------------------------------------------------
    int nums[] = {5, 15, -722, 1, 15, -24};
    int size = 6;

    int bestIndex = 0;

    int smallest = INT_MAX;
    int greatest = INT_MIN;

    for (int i = 1; i < size; i++)
    {

        // if (nums[i] < nums[bestIndex])
        // {
        //     bestIndex = i;
        // }


        if (nums[i] < smallest)
        {
            smallest = [nums[i]];
        }
        if (nums[i] > greatest)
        {
            greatest = nums[i];
        }
    }
    // cout << smallest << " " << greatest << endl;
    // cout << bestIndex << " " << endl;

-----------------------------------------
    //  Pass by reference
    int arr[] = {1, 2, 3};

    changeArr(arr,3);

    cout<<"In main "<<endl;
    for(int i =0; i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
-----------------------------------------

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << linearSearch(arr, size, 1) << endl;

    // Reverse An Array
    // int arr[] = {1, 2, 3, 4, 5};
    int size ;

    cout<< "Enter size of array: " << endl;
    cin>>size;
    int arr[size];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Before reversing " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArr(arr, size);
    cout << "After reversing " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Vector
    // vector<int> vec(4,0);
    // vector<char> vec={'R','U','H','A','N','I'};
    vector<int> vec;
    
    // cout << "Size of Vector is : " << vec.size() << endl;
    vec.push_back(22);
    vec.push_back(42);
    vec.push_back(28);

    cout<< "After Push Back,Size of Vector is : " << vec.size() << endl;
    vec.pop_back();
    cout<< "After Pop Back,Size of Vector is : " << vec.size()<<endl;
    
    for (int val : vec)
    { // For Each Loop
    cout << val << " ";
}
// cout<<vec[0];
// cout<<vec[1];
// cout<<vec[2];
// cout<<vec[3];
*/

    return 0;
}
