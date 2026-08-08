#include<iostream>
using namespace std;
int main(){
    int num;
    int reverse=0,lastdigit;

    cout <<"enter the number:";
    cin>>num;

    while(num>0){
        lastdigit=num%10;
        reverse=reverse*10+lastdigit;
        num/=10;
    }

    cout <<"reverse of number :" <<reverse;
}