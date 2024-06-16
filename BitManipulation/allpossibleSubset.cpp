#include <iostream>
#include <vector>
using namespace std;
/*To generate the all Possible Subset of a Set*/
void generateAllPossibleSubset(int i, vector<char> v, vector<char> temp, vector<vector<char>> &vec)
{
    if (i == v.size())
    {
        vec.push_back(temp);
        return;
    }
    // not-take it
    generateAllPossibleSubset(i + 1, v, temp, vec);

    // take it
    temp.push_back(v[i]);
    generateAllPossibleSubset(i + 1, v, temp, vec);
}
int main()
{
    int size;
    cin >> size;
    vector<char> v(size);
    // Get the elements

    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    vector<vector<char>> vec;
    vector<char> temp;
    generateAllPossibleSubset(0, v, temp, vec);

    // Print the results
    cout << "All Possible Subsets are:" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "{";
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}