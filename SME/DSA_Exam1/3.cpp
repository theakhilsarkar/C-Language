// Write a Program to find the sum of all digits of a given number.
// Only use for loop to solve a problem.

#include<iostream>
using namespace std;

int main()
{
    int n,sum = 0;

    cout << "Enter n : ";
    cin >> n;

    for(int i = n; i>0; i=i/10)
    {
        int ld = i % 10;
        sum = sum + ld;
    }
    
    cout << "Sum is : " << sum << endl;

    return 0;
}