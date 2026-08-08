#include <iostream>
using namespace std;

int main()
{
    int num, lastdigit, sum = 0;

    cout << "enter the number :";
    cin >> num;

    while (num != 1 )
    {
        while (num != 0)
        {
            lastdigit = num % 10;
            sum = sum + lastdigit * lastdigit;
            num /= 10;
        }
        num = sum ;
        sum = 0;
    }
    if (num == 1)
    {
        cout  << "is a happy number ";
    }
    else
    {
        cout << "is not a happy number ";
    }
}