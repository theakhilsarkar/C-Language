// Write a Program to print a given pattern using nested while loop only.
// @ @ @ @ @ @ @ @ @ @
// %  % %  %  %  %  % %  %
// @ @ @ @ @ @ @ @
// %  % %  %  %  %  %
// @ @ @ @ @ @
// %  % %  %  %
// @ @ @ @
// %  % %
// @ @
// %

#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=10; i++)
    {
        for(int j = i; j<=10; j++)
        {
            if(i%2!=0)
            {
                cout << "@ ";
            }
            else{
                cout << "% ";
            }
        }
        cout << endl;
    }
    return 0;
}