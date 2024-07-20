// Write a Program to create a dynamic 1D array of odd elements from given range. Also find the average of the generated elements.
// For example,
// Input:
// Enter starting number: 1
// Enter ending number: 20

// Output: 
// Array is 1 3 5 7 9 11 13 15 17 19
// Average is 10

#include<iostream>
using namespace std;

int main()
{
    int start,end,n;

    cout << "Enter start : ";
    cin >> start;
    cout << "Enter end : ";
    cin >> end;

    n = (end-start)/2;
    int arr[n];
    int index = 0;

    for(int i=start; i<=end; i++)
    {
        if(i%2!=0)
        {
            arr[index] = i;
            index++;
        }
       
    }

    for(int i=0; i<index; i++)
    {
        cout << arr[i] << " ";
    }



    return 0;
}