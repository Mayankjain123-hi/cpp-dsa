#include <iostream>
using namespace std;

int happy(int num, int sum)
{
    if (num == 0)
        return 1;

    int lastdigit = num % 10;
    sum += lastdigit * lastdigit;
    return happy(num / 10, sum);
}

int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;
    int sum = 0;

    int result = happy(num, sum);
    if (result == 1)
    {
        cout << "happy number ";
    }
    else
    {
        cout << "not a happy number";
    }
}