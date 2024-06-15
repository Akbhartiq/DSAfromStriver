#include <iostream>
#include <cmath>
using namespace std;
// Function to convert the Binary to Decimal Number

int binToDec(int num)
{
    int i = 0;
    int res = 0;
    while (num)
    {
        int dig = num % 10; // look for digits
        num = num / 10;
        res += (dig * pow(2, i)); // convert to Decimal
        i++;
    }
    return res;
}
int main()
{
    int num;
    cout << "Enter the Binary Number:";
    cin >> num;
    int dec = binToDec(num);
    cout << "Decimal Representation is : " << dec << endl;
    return 0;
}