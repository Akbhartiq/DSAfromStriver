#include <iostream>
using namespace std;
/*Given an Array all the Elements are present Thrice, except the one ,Find that Single Element*/

// Remark : Hashing is the Solution but with Extra Space Complexity of O(n)

// Function to get the Bit-Value at a Particular Position
int getBit(int num, int pos)
{
    return ((num & (1 << pos)) != 0);
}
int main()
{
    cout << sizeof(int) << endl;
    int size;
    cout << "Enter the size:";
    cin >> size;

    int arr[size];
    cout << "Enter the Elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Get the Solution Here
    int bitVal[32];
    for (int i = 0; i < 32; i++)
    {
        bitVal[i] = 0;
    }
    // Now get Ready For Traversing The Array
    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int val = arr[j];
            int bit = getBit(val, i);
            bitVal[i] += bit;
        }
    }

    // Constructing the Numbers
    int num = 0;
    for (int i = 0; i < 32; i++)
    {
        if (bitVal[i] % 3)
        {
            num += (1 << i);
        }
    }
    // Print the Result
    cout << "Unique Element in the Array :" << num << endl;
    return 0;
}