#include <iostream>
using namespace std;

int power(int num, int count)
{
    if (count == 0)
    {
        return 1;
    }
    return num * power(num, count - 1);
}
int armstrong(int num, int digit)
{
    if (num == 0)
    {
        return 0;
    }

    int lastdigit = num % 10;

    return power(lastdigit, digit) + armstrong(num / 10, digit);
}
int countDigit(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return 1 + countDigit(num / 10);
}
int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;

    int digit = countDigit(num);

    if (armstrong(num,digit) == num)
    {
        cout << "armstrong number ";
    }
    else
    {
        cout << "not armstrong number";
    }
}