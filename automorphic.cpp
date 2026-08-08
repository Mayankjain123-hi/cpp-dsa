#include<iostream>
using namespace std;

int main(){
    int num,square,lastdigit;

    cout << "enter the number :";
    cin >> num;

    square = num*num;

    lastdigit = square%10;
    if(lastdigit == num){
        cout << num << " is an automorphic number";
        }
        else{
            cout <<num << " is not an automorphic number ";

        }
    }
