// Write a Program to find total bill by adding % of GST of user choice.
// For example,
// Input:
// Enter Base Amount: 5000
// Enter GST% =18

// Output: 
// Total Bill Amount = 5900

#include<iostream>
using namespace std;

int main()
{
    float amount,gst,total = 0.0;

    cout << "Enter your amount : ";
    cin >> amount;
    cout << "Enter GST charge : ";
    cin >> gst;

    total = amount + (amount * gst)/100;

    cout << "Total Bill Amount : " << total << endl;
    return 0;
}