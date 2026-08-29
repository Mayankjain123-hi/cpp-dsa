#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "enter the number :";
    cin >> number;

    while (number % 2 == 0)
    {
        number /= 2;
    }
    while (number % 3 == 0)
    {
        number /= 3;
    }
    while (number % 5 == 0)
    {
        number /= 5;
    }

    if (number == 1)
        cout << "UGLY number ";
    else
        cout << "not an UGLY number";
}