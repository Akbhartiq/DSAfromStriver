#include <iostream>
#include <cmath>
using namespace std;
// Function to convert the Binary to Decimal Number

int octToDec(int num)
{
    int i = 0;
    int res = 0;
    while (num)
    {
        int dig = num % 10; // look for digits
        num = num / 10;
        res += (dig * pow(8, i)); // convert to Decimal
        i++;
    }
    return res;
}
int main()
{
    int num;
    cout << "Enter the Octal Number:";
    cin >> num;
    int dec = octToDec(num);
    cout << "Decimal Representation is : " << dec << endl;
    return 0;
}