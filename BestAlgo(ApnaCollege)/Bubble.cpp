#include <iostream>
using namespace std;

// Swap function
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Func for the bubble sort
void bubbleSort(int arr[], int n)
{
    /*Idea is to keep swapping the elements if they are in wrong Order*/
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
// Function to take the input to arr
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// print arr
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "Enter the size of the arr:";
    cin >> size;
    int arr[size];
    input(arr, size);
    bubbleSort(arr, size);
    print(arr, size);
    return 0;
}