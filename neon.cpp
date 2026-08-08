#include<iostream>
using namespace std;

int main(){
    int num,lastdigit,sum=0;
    int square;

    cout <<"enter the number :";
    cin >>num;

    square=num*num;

    while(square !=0){
        lastdigit=square%10;
        sum=sum+lastdigit;
        square/=10;
    }
    if(sum == num){
        cout << num <<" is a neon number";
    }
        else{
            cout << num <<" is not a neon number";
        }
    }
