#include <iostream>
#include <algorithm>
using namespace std;
/*Implement the Search Algo in 2D Matrix
Given that : Each Rows and Columns are sorted in ascending order*/
int main()
{
    int row;
    int col;
    cout << "Enter row and col:";
    cin >> row >> col;

    int mat[row][col];
    cout << "Enter the elements:" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }

    int key;
    cout << "Enter the key:";
    cin >> key;

    // Get the Solution here
    /*Idea is to first get the row Number in which it can lie*/
    int rowNum = -1;
    for (int i = 0; i < row; i++)
    {
        if (key >= mat[i][0] and key <= mat[i][col - 1])
        {
            rowNum = i;
            break;
        }
    }

    if (rowNum == -1)
    {
        cout << "Element Not Found!!" << endl;
        exit(0);
    }
    // Apply Binary Search in that Row
    int colNum = lower_bound(mat[rowNum], mat[rowNum] + col, key) - mat[rowNum];

    if (colNum != col and mat[rowNum][colNum] == key)
    {
        cout << "Hurray! Element Found at index (" << rowNum << "," << colNum << ")" << endl;
        return 0;
    }
    cout << "Element Not Found!!" << endl;
    return 0;
}

// There is one more cooler Approach To the Problem

// Helper function
bool isValid(int val, int l, int r)
{
    return (val >= l and val <= r);
}
void matSearch(int **mat, int row, int col, int key)
{
    // Stand at the top-right corner of the matrix
    int i = 0;
    int j = col - 1;
    while (isValid(i, 0, row - 1) and isValid(j, 0, col - 1))
    {
        if (mat[i][j] == key)
        {
            cout << "Found" << endl;
            break;
        }
        else if (mat[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << "Not Found!!" << endl;
}