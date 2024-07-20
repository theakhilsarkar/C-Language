#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;

    if(a==b && b==c)
    {
        cout << "All values are same !";
    }
    else
    {
        if(a==b || b==c || c==a)
        {
            cout << "any two values are same !" << endl;
            if(a<b)
            {
                if(a<c)
                {
                    cout << "a is minimum !";
                }
                else{
                    cout << "c is minimum !";
                    
                }
            }
            else
            {
                if(b<c)
                {   
                    cout << "b is minimum !";
                }
                else
                {
                    cout << "c is minimum !";
                }
            }
        }
        else
        {
            if(a<b)
            {
                if(a<c)
                {
                    cout << "a is minimum !";
                }
                else{
                    cout << "c is minimum !";
                    
                }
            }
            else
            {
                if(b<c)
                {   
                    cout << "b is minimum !";
                }
                else
                {
                    cout << "c is minimum !";
                }
            }
        }
    }
    return 0;
}