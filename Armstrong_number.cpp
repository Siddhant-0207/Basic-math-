#include <iostream>
using namespace std;
int main()
{
    // Take a input
    int n;
    cout << " Enter number : ";
    cin >> n;
    // creating a dup Integer where we stored the value of n
    int dup = n;
    int sum = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        n = n / 10;
    }
    if (sum == dup)
        cout << "is an Armstrong number.";
    else
        cout << "is not  an Armstrong number.";
    return 0;
}
