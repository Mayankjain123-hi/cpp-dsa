#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 40, 70, 90};
    int n = 5;
    int firstHighest = arr[0];
    int secondHighest = arr[0];
    int thirdHighest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > firstHighest)
        {
            thirdHighest = secondHighest;
            secondHighest = firstHighest;
            firstHighest = arr[i];
        }

        else if (arr[i] > secondHighest && arr[i] != firstHighest)
        {
            thirdHighest = secondHighest;
            secondHighest = arr[i];
        }

        else if (arr[i] > thirdHighest && arr[i] != secondHighest && arr[i] != firstHighest)
        {
            thirdHighest = arr[i];
        }
    }
    cout << "third highest :" << thirdHighest << '\n';
}