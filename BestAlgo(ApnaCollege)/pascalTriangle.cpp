#include <iostream>
using namespace std;

// Function to evaluate factorial
long long int fact(long long int n)
{
    long long int ans = 1;
    for (long long int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

// Function to evaluate nCr
long long int comb(long long int n, long long int r)
{
    long long int a = fact(n);
    long long int b = fact(r);
    long long int c = fact(n - r);
    return (a / (b * c));
}

// Function to prlong long int the Pascal Traingle
void printPascal(long long int n)
{
    cout << 1 << endl;
    for (long long int i = 1; i <= n - 1; i++)
    {
        for (long long int j = 0; j <= i; j++)
        {
            long long int val = comb(i, j);
            cout << val << " ";
        }
        cout << endl;
    }
}
int main()
{
    long long int n;
    cout << "Enter the value of the Number:";
    cin >> n;
    printPascal(n);
    return 0;
}