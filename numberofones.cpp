#include <iostream>
using namespace std;

int main()
{
    int number, count = 0;

    cout << "enter the number :";
    cin >> number;

    for (int i = 0; i <= number; i++)
    {
        int temp = i;
        while (temp != 0)
        {
            int lastdigit = temp % 10;
            if (lastdigit == 1)
            {
                count++;
            }
            temp /=10;
        }
    }
    cout << "number of ones : " <<count ;
}