#include <iostream>
using namespace std;

// func to check if the triplet is pythagorean
bool isTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b = min(x, min(y, z));
    int c = x + y + z - a - b;
    return a * a == (b * b + c * c);
}
int main()
{
    return 0;
}