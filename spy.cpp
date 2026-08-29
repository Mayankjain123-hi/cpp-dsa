#include <iostream>
using namespace std;

int main()
{
    int num, lastdigit;
    int sum = 0, product = 1;

    cout << "enter the number :";
    cin >> num;

    while (num != 0)
    {
        lastdigit = num % 10;
        sum = sum + lastdigit;
        product = product * lastdigit;
        num /= 10;
    }
    if (sum == product)
        cout << "SPY number ";
    else
        cout << "not a SPY number ";
}