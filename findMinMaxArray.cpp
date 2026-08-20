#include <iostream>
using namespace std;
int main(){
    int arr[]={100,29,30,40,50};
    int n =5;

    int min=arr[0];
    int max=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout << "minimum :" << min << endl;
    cout << "maximum :" << max << endl;
}