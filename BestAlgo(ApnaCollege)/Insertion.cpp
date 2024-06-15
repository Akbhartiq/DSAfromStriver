#include <iostream>
using namespace std;

// Function to insertion sort
void insertionSort(int arr[], int n)
{
    /*Idea is to place the proper elements from the frontSide*/
    for (int i = 1; i < n; i++)
    {
        /*Idea is to keep placing the upcoming new Element in the already sorted array on the left part*/
        int curr = arr[i];
        int j = i - 1;
        while (arr[j] > curr && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        // We don't need to swap just place
        arr[j + 1] = curr;
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
    insertionSort(arr, size);
    print(arr, size);
    return 0;
}