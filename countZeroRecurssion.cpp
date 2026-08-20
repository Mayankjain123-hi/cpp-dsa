#include <iostream>
using namespace std;

int countZero(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int lastdigit = n % 10;
    if (lastdigit == 0)
    {
        return 1 + countZero(n / 10);
    }
    else
        return countZero(n / 10);
}
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;

    cout << "number of zeroes :" << countZero(n);
}
