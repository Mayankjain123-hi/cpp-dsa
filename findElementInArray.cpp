#include <iostream>
using namespace std;

int search(int arr[], int n, int matchArray)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == matchArray)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int matchArray;

    int result = search(arr, 5, 40);
    if (result == -1)
    {
        cout << "element not found";
    }
    else
    {
        cout << "element found :" << result;
    }
}