#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the  number :";
    cin >> num;

    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << "not prime number :";
            return 1;
        }
        else
        {
             cout << "prime number";
             return 1;
        }
    }
}