#include <iostream>
#include <vector>
using namespace std;

// Let's learn about the iterators
int main()
{

    vector<int> values = {1, 2, 3, 4, 5};
    // Printing all the value in the values
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i] << endl;
    }
    // 2nd Method
    for (int value : values)
        cout << value << endl;

    // 3rd Method
    for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
    {
        cout << *it << endl;
    }
    // 4th Method
    for (auto it = values.begin(); it != values.end(); it++)
    {
        cout << *it << endl;
    }
    // 5th Method
    for (auto it : values)
    {
        cout << it << endl;
    }
    return 0;
}