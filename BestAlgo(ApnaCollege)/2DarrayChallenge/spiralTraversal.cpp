#include <iostream>
using namespace std;
/*Task is to print the Spiral Order Traversal of a Matrix*/
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

    // Get solution here
    // We need 4 loops
    cout << "*********Spiral Traversal*********" << endl;
    int rowNum = 0;
    int colNum = 0;
    int rowBound = 0;
    int colBound = 0;
    while (rowNum < row - rowBound and colNum < col - colBound)
    {
        while (colNum < col - colBound)
        {
            cout << mat[rowNum][colNum] << " ";
            colNum++;
        }
        cout << endl;
        colNum--;
        rowNum++;
        while (rowNum < row - rowBound)
        {
            cout << mat[rowNum][colNum] << " ";
            rowNum++;
        }
        cout << endl;
        rowNum--;
        colNum--;
        while (colNum >= colBound)
        {
            cout << mat[rowNum][colNum] << " ";
            colNum--;
        }
        cout << endl;
        colNum++;
        colBound++;
        rowBound++;
        rowNum--;
        while (rowNum >= rowBound)
        {
            cout << mat[rowNum][colNum] << " ";
            rowNum--;
        }
        cout << endl;
        rowNum++;
        colNum++;
    }
    return 0;
}