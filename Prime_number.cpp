#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Normal method
    int n;
    int count = 0;
    // Asking user to enter value
    cout << "Enter number :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        cout << "Yess the given number  is prime number " << endl;
    else
        cout << "NO the given number is not a prime number " << endl;

    // Anothe method
    // I presonlly call it squareroot n method
    // In this method we run the form 1 to squar root of n

    // set again count =0
    count = 0;

    cout << "Another method " << endl;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
                count++;
        }
        if (count == 2)
            cout << "Yess the given number  is prime number ";
        else
            cout << "NO the given number is not a prime number ";
    }
    return 0;
}