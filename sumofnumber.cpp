#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0, lastdigit;
    cout << "enter the number :" << '\n';
    cin >> num;
    while (num > 0)
    {
        lastdigit = num % 10;
        sum = sum + lastdigit;
        num /= 10;
    }
    cout << "sum of digit of number :" << sum;
}