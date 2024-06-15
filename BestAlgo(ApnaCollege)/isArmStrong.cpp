#include <iostream>
using namespace std;

// Function to check if the number is  armstrong
bool isArmstrong(int num)
{
    int copy = num;
    int digSum = 0;
    while (num)
    {
        int dig = num % 10;
        num = num / 10;
        digSum = digSum + (dig * dig * dig);
    }
    cout << "DigSum is " << digSum << endl;
    return digSum == copy;
}
int main()
{
    int num;
    cout << "Enter the Number" << endl;
    cin >> num;
    bool flag = isArmstrong(num);
    if (flag)
        cout << "ArmStrong" << endl;
    else
        cout << "Not ArmStrong" << endl;
    return 0;
}