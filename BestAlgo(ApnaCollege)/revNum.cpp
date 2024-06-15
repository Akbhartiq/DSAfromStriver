#include <iostream>
using namespace std;

// Function to Reverse a Number
int rev(int num)
{
    int res = 0;
    // Get all the digits
    while (num)
    {
        int dig = num % 10;
        num = num / 10;
        res = res * 10 + dig;
    }
    return res;
}

int main()
{
    int num;
    cout << "Enter the Number:";
    cin >> num;
    int revNum = rev(num);
    cout << revNum << endl;
    return 0;
}