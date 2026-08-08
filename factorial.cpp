#include <iostream>
using namespace std;

int main(){
    int number;
    int factorial =1;

    cout <<"enter the number :";
    cin >> number;

    for(int i=1;i<=number;i++){
        factorial*=i;
    }
    cout <<"Factorial = " <<factorial;
}