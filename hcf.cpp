#include <iostream>
using namespace std;

int main()
{
    int a, b, hcf;

    cout << "enter the two numbers";
    cin >> a >> b;

    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF :" << hcf;
}