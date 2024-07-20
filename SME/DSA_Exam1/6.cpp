// Write a Program to find the largest element from a dynamic RxC 2D array. Use only while loop in a whole program.
// For example,
// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3

// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 7
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 9
// a[2][2] = 6

// Output:
// The largest element is: 9

#include <iostream>
using namespace std;

int main()
{
    int r, c, i=0, j=0, max;

    cout << "Enter row : ";
    cin >> r;
    cout << "Enter column : ";
    cin >> c;

    int a[r][c];

    // while (i < r)
    // {
    //     while (j < c)
    //     {
    //         cout << "a[" << i << "][" << j << "] : ";
    //         cin >> a[i][j];
    //         j++;
    //     }
    //     i++;
    // }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << "a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    max = a[0][0];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        cout << endl;
    }

    cout << "max is : " << max << endl;



    
    return 0;
}