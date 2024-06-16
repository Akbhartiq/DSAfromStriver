#include <iostream>
using namespace std;
/*Function to Update Bit*/
int updateBit(int num, int pos, int newBit)
{
    int currBit = (num & (1 << pos) != 0);
    if (currBit != newBit)
        return num ^ (1 << pos);
    return num;
}
int main()
{
    int num, pos, newBit;
    cin >> num >> pos >> newBit;
    int newNum = updateBit(num, pos, newBit);
    cout << newNum << endl;
    return 0;
}