#include <iostream>
using namespace std;

int main()
{
    int row1, col1, row2, col2;
    cout << "Enter the row1 and col1:";
    cin >> row1 >> col1;
    cout << "Enter the row2 and col2:";
    cin >> row2 >> col2;

    if (col1 != row2)
    {
        cout << "Invalid Arguments" << endl;
        exit(0);
    }

    int mat1[row1][col1];
    int mat2[row2][col2];

    cout << "Enter the elements in 1st Matrix:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter the elements in 2nd Matrix:" << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    // Get the Solution here
    int row3 = row1;
    int col3 = col2;
    int mat3[row3][col3];

    // loop to fill out the Elements
    for (int i = 0; i < row3; i++)
    {
        for (int j = 0; j < col3; j++)
        {
            int res = 0;
            for (int colNum = 0, rowNum = 0; colNum < col1; colNum++, rowNum++)
            {
                res += (mat1[i][colNum] * mat2[rowNum][j]);
            }
            mat3[i][j] = res;
        }
    }

    // Get the Result on the Screen
    cout << "*************Resultant Matrix*************" << endl;
    for (int i = 0; i < row3; i++)
    {
        for (int j = 0; j < col3; j++)
        {
            cout << mat3[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}