#include <iostream>
using namespace std;

int main()
{
    int rows = 2, cols = 2;

    int A[2][2] = {{1, 2}, {3, 4}};
    double B[2][2] = {{1.5, 2.5}, {3.5, 4.5}};

    double addResult[2][2];
    double subResult[2][2];
    double mulResult[2][2] = {{0, 0}, {0, 0}};

    // Addition and Subtraction
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            addResult[i][j] = A[i][j] + B[i][j];
            subResult[i][j] = A[i][j] - B[i][j];
        }
    }

    // Multiplication (A * B)
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mulResult[i][j] = 0;
            for (int k = 0; k < cols; k++)
            {
                mulResult[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output Results
    cout << "Addition Result:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << addResult[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSubtraction Result:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << subResult[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMultiplication Result:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mulResult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
