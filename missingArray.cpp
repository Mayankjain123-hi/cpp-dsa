#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = 4;
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        sum = sum + arr[i];
    }

    int total = n * (n + 1) / 2;

    int missing = total - sum;

    cout << "Missing number = " << missing;

    return 0;
}
