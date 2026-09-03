#include <iostream>
using namespace std;

bool ugly(int n)
{

    if (n <= 0)
        return false;

    if (n == 1)
        return true;

    if (n % 2 == 0)
    {
        return ugly(n / 2);
    }

    if (n % 3 == 0)
    {
        return ugly(n / 3);
    }

    if (n % 5 == 0)
    {
        return ugly(n / 5);
    }
    return false;
}
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;

    if (ugly(n))
    {
        cout << "ugly ";
    }
    else
    {
        cout << "not an ugly number ";
    }
}