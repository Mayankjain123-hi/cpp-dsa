#include <iostream>
using namespace std;

int main()
{
    int number, lastdigit, duplicatenumber;
    int reverse = 0;

    cout << "enter the number :";
    cin >> number;

    duplicatenumber = number;

    while (number > 0)
    {
        lastdigit = number % 10;
        reverse = reverse * 10 + lastdigit;
        number /= 10;
    }

    if (duplicatenumber == reverse)
    {
        cout << duplicatenumber << " is a palidrome number";
    }
    else
    {
        cout << duplicatenumber << " is not a palidrome number";
    }
}
