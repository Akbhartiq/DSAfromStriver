#include <iostream>
using namespace std;

// Maximum circular Subarray Sum
/*Task is to find the maximum circular subarray sum*/

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

    // Get the solution here
    /*We need to solve 2 problems*/
    // 1.Maximum Subarray Sum
    int l = 0;
    int r = 0;
    int currSum = 0;
    int maxSum = -1e9;
    int totalSum = 0;
    while (r < size)
    {
        totalSum += arr[r];
        currSum += arr[r];
        maxSum = max(maxSum, currSum);
        if (currSum <= 0)
        {
            currSum = 0;
        }
        r++;
    }

    // 2.Solve for the minimum Subarray Sum Problem
    currSum = 0;
    l = 0;
    r = 0;
    int minSum = 1e9;
    while (r < size)
    {
        currSum += arr[r];
        minSum = min(minSum, currSum);
        if (currSum >= 0)
        {
            currSum = 0;
        }
        r++;
    }

    int maxCircularSubArraySum = max(maxSum, totalSum - minSum);
    cout << "Maximum Circular Subarray Sum is " << maxCircularSubArraySum << endl;
    return 0;
}