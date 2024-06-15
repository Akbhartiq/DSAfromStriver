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

            return false;
        }
    }
    return true;
}

void printPrime(int a, int b)
{
    for (int val = a; val <= b; val++)
    {
        if (isPrime(val))
        {
            cout << val << endl;
        }
    }
    return;
}

int main()
{
    int a, b;
    cout << "Enter a and b:";
    cin >> a >> b;
    printPrime(a, b);
    return 0;
}