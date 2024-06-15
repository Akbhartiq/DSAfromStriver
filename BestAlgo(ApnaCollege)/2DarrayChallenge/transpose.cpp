#include <iostream>
using namespace std;
/*To print the transpose of a Matrix*/
int main()
{
    int n;
    cout << "Enter the order of the matrix:";
    cin >> n;

    int mat[n][n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    // Get the solution here
    cout << "*****************Transpose*****************" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cout << mat[j][i]<<" ";
    return 0;
}