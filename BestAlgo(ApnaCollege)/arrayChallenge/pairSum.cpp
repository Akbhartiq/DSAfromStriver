#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/*Pair Sum Problem
  ->Task is to find the 2 elements in an array such that they adds to target*/
int main()
{
    int size;
    cout << "Enter the size:";
    cin >> size;
    vector<int> vec(size);
    cout << "Enter the Elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }

    int target;
    cout << "Enter the Target Value:";
    cin >> target;

    // Get solution here
    unordered_map<int, int> mp; //[element,index]
    for (int i = 0; i < size; i++)
    {
        mp[vec[i]] = i + 1;
    }

    // Traverse the array again
    for (int i = 0; i < size; i++)
    {
        int val = target - vec[i];
        if (mp[val] and mp[val] - 1 != i)
        {
            cout << "Two elements are {" << vec[mp[val] - 1] << " , " << vec[i] << "}" << endl;
            break;
        }
    }
    return 0;
}