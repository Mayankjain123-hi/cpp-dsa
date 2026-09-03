#include <iostream>
using namespace std;

int palindrome(int number, int reverse)
{
    if (number == 0)
        return reverse;

    return palindrome(number / 10, reverse * 10 + number % 10);
}

int main()
{
    int number = 101;
    int reverse = palindrome(number, 0);

    if (number == reverse)
    {
        cout << "palindrome number ";
    }
    else
    {
        cout << "not a palindrome number ";
    }
}