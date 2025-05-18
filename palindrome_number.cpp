#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number " << endl;
    cin >> num;
    // creating a dup interger where we store a value of num
    int dup = num;
    int revnumber = 0;
    while (num != 0)
    {
        int lastdigit;
        lastdigit = num % 10;
        revnumber = (revnumber * 10) + lastdigit;
        num = num / 10;
    }
    if (revnumber == dup)
        cout << "is a palindrome number.";
    else
        cout << "is not  a palindrome number. ";
    return 0;
}