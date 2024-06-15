#include <iostream>
using namespace std;

// print Array
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size:";
    cin >> size;
    int arr[size];
    cout << "Enter elements:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    /*
    1.Naive approach: Start Searching element from 1 untill you find the missing one

    2.Sorting : Sort the Array and then look for the smallest missing , T.C =  O(nlogn + n)

    3.Hashing : Create an array Hash , and mark the 1-based Index of all +ve Numbers and then Traverse to get the smallest missing , T.C = O(n + n + n) , S.C=O(n) not o(max[element])

    4.Coolest One : Idea is to use array Elements as Index




    */
    int pind = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            int temp = arr[pind];
            arr[pind] = arr[i];
            arr[i] = temp;
            pind++;
        }
    }
    // print(arr, size);
    for (int i = 0; i < pind; i++)
    {
        if (arr[i] <= pind)
        {
            arr[arr[i] - 1] *= -1;
        }
    }
    // get the smallest index being still positive
    for (int i = 0; i < pind; i++)
    {
        if (arr[i] > 0)
        {
            cout << "Smallest Missing Number is " << i << endl;
            return 0;
        }
    }
    // if not found min the non-gettable Element was abset
    cout << "Smallest Missing Number is " << pind + 1 << endl;
    return 0;
}