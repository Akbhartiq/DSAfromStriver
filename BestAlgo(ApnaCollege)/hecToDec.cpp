#include <iostream>
#include <cmath>
using namespace std;
int helper(char ch)
{
    switch (ch)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    case 'A':
        return 10;
    case 'B':
        return 11;
    case 'C':
        return 12;
    case 'D':
        return 13;
    case 'E':
        return 14;
    case 'F':
        return 15;
    }
}
// Function to convert the Binary to Decimal Number
int hexToDec(string num)
{
    int res = 0;
    int i = 0;
    for (auto it = num.rbegin(); it != num.rend(); it++)
    {
        int dig = helper(*it);
        res += dig * pow(16, i);
        i++;
    }
    return res;
}
int main()
{
    string num;
    cout << "Enter the HexaDeimal Number:";
    cin >> num;
    int dec = hexToDec(num);
    cout << "Decimal Representation is : " << dec << endl;
    return 0;
}