#include <bits/stdc++.h>
using namespace std;
int main()
{ // Normal method
    int n;
    // Asking user to enter value
    cout << "Enter number :";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }

    //Anothe method 
    // I presonlly call it squareroot n method 
    // In this method we run the form 1 to squar root of n 
    cout <<"Anothe method "<<endl;
    for ( int i =1; i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            cout<<i<<endl;
            if (n/i!=i)
            cout<< (n/i)<<endl;
        }
    }
    return 0;
}