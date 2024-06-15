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

    int sum;
    cout << "Enter the target sum:";
    cin >> sum;

    // Solution
    int currsum = 0;
    int l = 0;
    int r = -1;

    while (r < size)
    {
        r++;
        currsum += arr[r];
        cout << "currSum = " << currsum << endl;
        if (currsum == sum)
        {
            break;
        }
        else if (currsum > sum)
        {
            cout << "I am here" << endl;
            currsum -= arr[l];
            cout << "Now CurrSum = " << currsum << endl;
            l++;
            currsum -= arr[r];
            r--;
        }
    }
    cout << "Left side = " << l << "\tRight side = " << r << endl;
    return 0;
}