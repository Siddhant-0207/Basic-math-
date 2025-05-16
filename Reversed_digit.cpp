#include <iostream>
using namespace std;
int reverseDigits(int n)
{
    int reversed = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        reversed = reversed * 10 + lastdigit;
        n = n / 10;
    }
    return reversed;
    
}
int main()
{
    int num;
    // Ask the user to enter a number
    cout << "Enter a  number : ";
    cin >> num;

    int result = reverseDigits(num);
    // Print the revese number
    cout << "Reversed number " << result << endl;
    return 0;
}