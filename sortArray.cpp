#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40,50};
    int n = 5;
    for (int i = 0; i < n; i++){
        if(arr[i]>arr[i+1]){
            cout << "array not sorted \n";
        }
        else{
            cout << "array sorted";
        }
    }
}