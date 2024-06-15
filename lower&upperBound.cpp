#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    /*1.Check if X exists in a Sorted Array or Not?*/
    int a[] = {1, 3, 4, 5, 10};
    bool res = binary_search(a, a + 5, 10); //[start,end)
    cout << res << endl;

    /*2.Lower Bound Concepts : Binary Search Thing (logn)
      ->Concept is that, it points to equal to or immediate next greater element*/

    int b[] = {1, 2, 3, 4, 5, 10, 12, 13};    // size = 8
    int index = lower_bound(b, b + 8, 1) - b; // -b is to get the index
    int ind = lower_bound(b, b + 8, 14) - b;  // it will be 8

    /*3.Upper Bound Concepts : Binary Search thing (logn)
        ->Concept is that , it points only to next immediate bigge element*/

    int c[] = {1, 10, 15, 18};                 // size=4
    int cindex = upper_bound(c, c + 4, 1) - c; // it will give 1 as the answer
    
    return 0;
}