#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size:";
    cin >> size;
    vector<int> v(size);
    // get the input
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    // Here is the code to get the longest Arithmetic Subarray
    vector<int> diff(size - 1);
    for (int i = 0; i < size - 1; i++)
    {
        diff[i] = v[i + 1] - v[i];
    }

    // get the solution
    int curr = 1;
    int maxi = 1;
    for (int i = 0; i < size - 2; i++)
    {
        if (diff[i] == diff[i + 1])
        {
            curr++;
        }
        else
        {
            curr = 1;
            maxi = max(curr, maxi);
        }
    }
    maxi = max(curr, maxi);
    cout << "The Length of the longes Arithmetic Subarray is " << maxi + 1 << endl;
    return 0;
}