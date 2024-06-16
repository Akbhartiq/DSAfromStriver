#include <iostream>
using namespace std;
/*Function to get the Bit*/
bool getBit(int num, int pos)
{
    if (num & (1 << pos) != 0)
    {
        return true;
    }
    return false;
}
int main()
{
    int num;
    cin >> num;
    int pos;
    cin >> pos;
    bool flag = getBit(num, pos);
    cout << flag << endl;

    return 0;
}