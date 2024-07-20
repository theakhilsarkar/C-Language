// Write a Program to find cubes of all elements from a given 2D array of NxN using Pointer with UDF.
// For example,
// Input:
// Enter array's size: 2

// Enter array elements:
// a[0][0] = 3
// a[0][1] = 2
// a[1][0] = 5
// a[1][1] = 4

// Output:
// Cubes of all elements:
// 9   4
// 25 64

#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter n : ";
    cin >> n;

    int a[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << "a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << a[i][j] * a[i][j] * a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}