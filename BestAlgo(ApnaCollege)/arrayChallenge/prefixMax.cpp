#include <iostream>
#include <vector>
using namespace std;
// Function to calculate  the prefix max Arr
void prefixMax(vector<int> arr)
{
    vector<int> preMax;
    int maxi = arr[0];
    for (auto it : arr)
    {
        maxi = max(maxi, it);
        preMax.push_back(maxi);
    }
    // let's print the vector
    for (auto it : preMax)
    {
        cout << it << " ";
    }
    cout << endl;
}
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
    // call the Function
    prefixMax(v);
    return 0;
}