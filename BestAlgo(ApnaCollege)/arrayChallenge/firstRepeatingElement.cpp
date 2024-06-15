#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Get Ready for the solution
    // Use Hashing
    int ans = -1;
    int hash[int(1e6) + 1] = {0};
    for (int i = 0; i < size; i++)
    {
        cout << "Element is " << arr[i] << endl;
        if (hash[arr[i]] == 0)
            hash[arr[i]] = i + 1;
        else
        {
            ans = hash[arr[i]] - 1;
            break;
        }
    }
    cout << "Index = " << ans << " and Element = " << arr[ans] << endl;
    return 0;
}