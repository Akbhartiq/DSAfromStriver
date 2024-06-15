#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int val)
{
    if (val == 2)
        return true;
    if (val == 1)
        return false;
    for (int num = 2; num <= sqrt(val); num++)
    {
        if (val % num)
            continue;
        else
        {
            cout << num << endl;
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    bool flag = isPrime(num);
    if (flag)
        cout << "Prime" << endl;
    else
        cout << "Composite" << endl;
    return 0;
}