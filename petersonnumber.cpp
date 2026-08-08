#include <iostream>
using namespace std;
int main()
{
    int num, duplicatenumber, factorial, sum = 0;

    cout << "enter the number :";
    cin >> num;
    duplicatenumber=num;

    while (duplicatenumber != 0)
    {
        int lastdigit = duplicatenumber % 10;
        factorial = 1;
        for (int i = 1; i <= lastdigit; i++)
        {
            factorial *= i;
        }
        sum = sum + factorial;
        duplicatenumber /= 10;
    }
    if (sum == num)
    {
        cout << num << "is a peterson number ";
    }
    else
    {
        cout << num << "is not a peterson number";
    }
}