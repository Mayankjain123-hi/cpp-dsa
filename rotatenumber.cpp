#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;
    int temp = num;
    int rotation = 8;
    int count = 0;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    rotation = rotation % count ;
    int power = pow(10, rotation);
    int left = num / power;
    int right = num % power;
    

    int power2 = pow(10, count - rotation);
    int result = right * power2 + left;

    cout << "rotated number :" << result;
}