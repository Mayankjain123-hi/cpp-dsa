#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int num, duplicatenum, firstdigit, lastdigit;
    int count = 0;

    cout << "enter the number :";
    cin >> num;

    duplicatenum = num;

    while (duplicatenum > 0)
    {
        count++;
        duplicatenum /= 10;
    }
    
    firstdigit = num / pow(10,count-1);
    lastdigit= (num % 10) * (int)pow(10,count-1) ; 

    int middledigit = (num / 10 ) % (int)pow(10,count-2);

    int result = lastdigit  +middledigit * 10 + firstdigit;

    cout << "after swapping first and last digit :" << result;
}