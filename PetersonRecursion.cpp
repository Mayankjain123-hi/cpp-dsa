#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;

    return num * factorial(num - 1);
}
int peterson(int num)
{
    if (num == 0)
        return 0;

    int lastdigit = num % 10;
    return factorial(lastdigit) + peterson(num / 10);
}
int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;

    if (peterson(num) == num)
    {
        cout << "peterson number";
    }
    else
    {
        cout << "not a peterson number";
    }
}