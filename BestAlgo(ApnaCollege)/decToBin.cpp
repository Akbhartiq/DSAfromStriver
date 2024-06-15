#include <iostream>
#include <cmath>
using namespace std;
// Function to convert the Binary to Decimal Number

int decToBin(int num)
{
    int i = 0;
    int res = 0;
    while (num)
    {
        int dig = num % 2; // look for digits
        num = num / 2;
        res += (dig * pow(10, i)); // convert to Decimal
        i++;
    }
    return res;
}
int main()
{
    int num;
    cout << "Enter the Decimal Number:";
    cin >> num;
    int dec = decToBin(num);
    cout << "Binary Representation is : " << dec << endl;
    return 0;
}