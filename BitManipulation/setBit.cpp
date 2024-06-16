#include <iostream>
using namespace std;
/*Function to setBit*/
int setBit(int num, int pos)
{
    return num | (1 << pos);
}
int main()
{
    int num;
    int pos;
    cin >> num >> pos;
    int newNum = setBit(num, pos);
    cout << newNum << endl;
    return 0;
}