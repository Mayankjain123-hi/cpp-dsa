#include <iostream>
using namespace std;

void table(int number, int i)
{
    if (i > 10)
    {
        return;
    }
    cout << number << "x" << i << "=" << number * i << endl;
    table(number, i + 1);
}

int main()
{
    int number;
    cout << "enter the number :";
    cin >> number;

    table(number, 1);
}
