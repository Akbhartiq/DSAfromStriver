#include <iostream>
using namespace std;
/*Given an Array we have all Elements occuring 2 Times and Two Elements occurs only 1 Time*/
// Function to get the position of the Right-Most Bit

/*TC analysis:
O(1) for the getPos because at maximum you can go to 64 in 64-bit architecture
*/
int getPos(int num)
{
    if (num == 0)
    {
        cout << "No Bit is Set" << endl;
        exit(0);
    }
    int i = 0;
    while (true)
    {
        if (num & (1 << i))
        {
            return i;
        }
        i++;
    }
}
// Function to get bit

/*TC analysis:
O(1)
*/
int getBit(int num, int pos)
{
    if (num & (1 << pos))
    {
        return 1;
    }
    return 0;
}
int main()
{
    int size;
    cout << "Enter the size:";
    cin >> size;
    int arr[size];
    cout << "Enter the Elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // Get the Solution here
    int value = 0;
    for (int i = 0; i < size; i++)
    {
        value ^= arr[i];
    }
    // Get the position where the right-Most Bit is located
    int pos = getPos(value);
    int first = 0, second = 0;
    for (int i = 0; i < size; i++)
    {
        if (getBit(arr[i], pos))
        {
            first = first ^ arr[i];
        }
        else
        {
            second = second ^ arr[i];
        }
    }
    // Print the value
    cout << "First:" << first << " and Second:" << second << endl;
    return 0;
}