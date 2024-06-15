#include <iostream>
using namespace std;
/*Problem Desc:
Task is to find the maximum subarray sum in a given array
*/
int main()
{
    int size;
    cout << "Enter the size:";
    cin >> size;
    int arr[size];
    cout << "Enter the elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Solution here
    /*Kadane's Algorithm*/
    int currSum = 0;
    int maxSum = -1e9;
    int l = 0;
    int r = -1;
    int left = 0;
    int right = 0;
    while (r < size - 1)
    {
        r++;
        currSum += arr[r];
        if (maxSum < currSum)
        {
            right = r;
            left = l;
            maxSum = currSum;
        }
        if (currSum <= 0)
        {
            currSum = 0;
            l = r + 1;
        }
    }
    cout << "MaxSum is " << maxSum << endl;
    cout << "Left = " << left << " and " << "Right = " << right << endl;
    return 0;
}