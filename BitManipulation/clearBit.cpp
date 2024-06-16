#include <iostream>
using namespace std;
/*Function to clear the Bit*/
int clearBit(int num, int pos)
{
    // First get the Bit at that position
    bool bit = (num & (1 << pos) != 0);
    if (!bit)
    {
        return num;
    }
    // If 1 is the Bit
    return num ^ (1 << pos);

    /*There is one More approach where we first invert the num
      And then take bitwise or with 1 and then again invert*/
}
int main()
{
    int num, pos;
    cin >> num >> pos;
    int newNum = clearBit(num, pos);
    cout << newNum << endl;
    return 0;
}