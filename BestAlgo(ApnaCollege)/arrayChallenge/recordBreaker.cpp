#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size:";
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    // solve the problem in one Iteration
    /*Idea is to use the prefixMax to satisfy the condition of being larger than all previous days values*/
    int count = 0;
    int maxVal = v[0];
    for (int i = 0; i < size; i++)
    {
        if (i == 0 and size > 1)
        {
            if (v[i] > v[i + 1])
            {
                count++;
            }
        }
        else if (i == size - 1)
        {
            if (v[i] > maxVal)
            {
                count++;
            }
        }
        else
        {
            if (v[i] > maxVal and v[i] > v[i + 1])
            {
                count++;
            }
        }
        maxVal = max(maxVal, v[i]);
    }
    // Output the Result
    cout << "The total Number of Record Breaking Days is " << count << endl;
    return 0;
}