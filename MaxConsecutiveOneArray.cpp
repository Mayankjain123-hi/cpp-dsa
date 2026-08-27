#include <iostream>
using namespace std;
int maxConsecutive(int arr[], int size)
{
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count > maxCount)
        {
            maxCount = count;
        }
    }
    return maxCount;
}

int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = maxConsecutive(arr, size);

    cout << "maximum consecutive 1s :" << result;
}