#include <iostream>
using namespace std;

int main(){
    int number;
    int firstnumber = 0,secondnumber =1;
    int thirdnumber;

    cout <<"enter number of terms :";
    cin >> number;

    for(int i=1;i<=number;i++){
        thirdnumber=firstnumber+secondnumber;
        firstnumber=secondnumber;
        secondnumber=thirdnumber;
        cout <<  thirdnumber << '\n';
        //cout <<  thirdnumber;

    }
}