#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, duplicatenumber, lastdigit;
    int sum = 0;
    int count = 0;

    cout << "enter the number :";
    cin >> num;

    duplicatenumber = num;

    while (duplicatenumber != 0)
    {
        duplicatenumber /= 10;
        count++;
    }
    duplicatenumber = num;
    while (duplicatenumber != 0)
    {
        lastdigit = duplicatenumber % 10;
        sum = sum + pow(lastdigit, count);
        duplicatenumber /= 10;
    }

    if (sum == num)
    {
        cout << num << " is armstrong number";
    }
    else
    {
        cout << num << " is not an armstrong number";
    }
}
