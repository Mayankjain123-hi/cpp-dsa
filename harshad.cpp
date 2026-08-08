#include <iostream>
using namespace std;

int main()
{
    int num, duplicatenumber, lastdigit, sum = 0;

    cout << "enter the number :";
    cin >> num;

    duplicatenumber = num;

    while (duplicatenumber != 0)
    {
        lastdigit = duplicatenumber % 10;
        sum = sum + lastdigit;
        duplicatenumber /= 10;
    }
    if (num % sum == 0)
    {
        cout << num << "is a harshad number ";
    }
    else
    {
        cout << num << "is not a harshad number ";
    }
}