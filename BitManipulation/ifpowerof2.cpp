#include <iostream>
using namespace std;
/*Function to check if the given number is power of 2*/
bool isPowerof2(int num)
{
    // Count the number of setBit
    if (num == 0)
        return false;
    int count = 0;
    while (num)
    {
        int dig = num % 2;
        num = num / 2;
        if (dig == 1)
        {
            count++;
        }
        if (count > 1)
        {
            return false;
        }
    }
    return true;
}
// Get the gist of BK's Algorithm
/*Idea is to keep clearing the RightMost Bit*/
/*It is count the number of SetBit in a number*/
int BKalgo(int num)
{
    int count = 0;
    while (num)
    {
        num = num & (num - 1);
        count++;
    }
    return count;
}
int main()
{
    int num;
    cin >> num;
    bool flag = isPowerof2(num);
    cout << flag << endl;
    return 0;
}