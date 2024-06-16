#include <iostream>
#include <algorithm>
using namespace std;

/*Welcome to the Concept of the STL Algorithm*/

// Comparator
bool comp(pair<int, int> a, pair<int, int> b)
{
    // return true if it satisfy your wish
    if (a.second < b.second)
    {
        return true;
    }
    if (a.second == b.second)
    {
        return a.first >= b.first;
    }
    return false;
}

int main()
{

    int a[] = {1, 2, 5, 2, 9, -1, 4, 2, 6}; // size = 9

    // Sort the Entire array
    sort(a, a + 9);

    // Sort a Particular Portion
    sort(a + 3, a + 6);

    // Sorting in Descending Order
    sort(a, a + 9, greater<int>());

    // Comparator
    pair<int, int> ap[] = {{1, 2}, {4, 2}, {6, 4}, {8, 3}};

    /* Sort it in ascending order of Second element , and if
       Second Element is same , then sort it in descending order of second element
    */

    sort(ap, ap + 4, comp); // 3rd one is comparator

    // counting the Number of setBit
    int num = 7;
    int value = _builtin_popcount(num);

    long long number = 123456732345;
    int val = _builtin_popcountll(number);

    // Next permutation
    string st = "123";
    do
    {
        cout << st << endl;
    } while (next_permutation(st.begin(), st.end()));

    // Get the max element
    int maxi = *(max_element(a, a + 9));
    int mini = *(min_element(a, a + 9));

    return 0;
}